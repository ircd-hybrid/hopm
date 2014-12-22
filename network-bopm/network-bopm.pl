#!/usr/bin/perl
#Copyright (C) 2003  Erik Fears
#
#This program is free software; you can redistribute it and/or
#modify it under the terms of the GNU General Public License
#as published by the Free Software Foundation; either version 2
#of the License, or (at your option) any later version.
#
#This program is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.
#
#You should have received a copy of the GNU General Public License
#along with this program; if not, write to the Free Software
#
#      Foundation, Inc.
#      59 Temple Place - Suite 330
#      Boston, MA  02111-1307, USA.


 
use strict;
use Socket;

#Options
my %BOPM    = (
                 NICK     => 'bopm',              #Our bopm's nick
                 TS_GRACE => 30,                  #Delta allowed above LAST_SCAN in seconds
                 LAST     => time,                #TS of last scan
              );


my %IRC =     (
                  NAME     => 'bopm.blitzed.org', #Your server name
                  HOST     => 'localhost',        #Remote server we're linking to
                  PORT     => '6667',             #Port of remote server we're linking to
                  PASS     => 'link',             #Link password from C/N
              );


#Bahamut
my %PROTOCOL = (
                  CAPAB        => 'TS3 NOQUIT SSJOIN BURST UNCONNECT NICKIP TSMODE',
               );

my %NICKFORMAT = (
                    NICK     => 1,
                    TS       => 3,
                    USERNAME => 5,
                    HOSTNAME => 6,
                    SERVER   => 7,
                    IP       => 9,
                    REALNAME => 10,
                 );

###### END CONFIGURATION ######

my %IRC_FUNCTIONS = (
                     'PING'    => \&m_ping,
                     'NICK'    => \&m_nick,
                    );

my $IRC_SOCKET;
my $IRC_DATA;


main();

# main
#
# Main connects to the IRC server
# and handles the main daemon loop.

sub main #()
{
   my $read;

   irc_init();
   irc_connect();

   while(1) {
      if($IRC_SOCKET)
      {
         irc_read();
      }
      irc_reconnect();
   }
}


# do_log
#
# Log!
 
sub do_log #($data)
{
   my $data = $_[0];
   print STDOUT "[" . scalar localtime() . "] " . $data . "\n";
}


# init
#
# Initialize IRC socket
#

sub irc_init #()
{
   if(!socket($IRC_SOCKET, PF_INET, SOCK_STREAM, getprotobyname('tcp')))
   {
      do_log(sprintf('IRC -> Error initializing IRC socket: %s', $!));
      die;
   }
}


# irc_connect
#
# Connect to IRC and send registration data
#

sub irc_connect #()
{
   if(!connect($IRC_SOCKET, sockaddr_in($IRC{PORT}, inet_aton($IRC{HOST}))))
   {
      do_log(sprintf('IRC -> Error connecting to IRC host: %s', $!));
      return;
   }

   irc_send(sprintf('PASS %s', $IRC{PASS}));
   irc_send(sprintf('CAPAB %s',$PROTOCOL{CAPAB}));
   irc_send(sprintf('SERVER %s', $IRC{NAME}));
}



# irc_reconnect
#
# Reconnct to IRC server
#

sub irc_reconnect #()
{

   do_log('IRC -> Reconnecting to server in 30 seconds..');

   close($IRC_SOCKET);

   sleep(30);

   if(!socket($IRC_SOCKET, PF_INET, SOCK_STREAM, getprotobyname('tcp')))
   {
      do_log(sprintf('IRC -> Error initializing IRC socket: %s', $!));
      die;
   }

   irc_connect();
}



# irc_send
#
# Send data to IRC server
#
# $_[0] IRC Data to send

sub irc_send #($data)
{
   my $data = $_[0];


   do_log(sprintf('IRC SEND -> %s', $data));

   $data .= "\n\n";

   if(!send($IRC_SOCKET, $data, 0))
   {
      do_log(sprintf('IRC -> send() error: %s', $!));
      irc_reconnect();
   }
}


# irc_read
#
# Read data from IRC server
#

sub irc_read #()
{
   while(<$IRC_SOCKET>)
   {
      chomp;
      irc_parse($_);
   }
}



sub irc_parse #($line)
{
   my $line = $_[0];
  
   my @parv;
   my $command;
   my $message;
   my %source;

   chomp $line;

   do_log(sprintf('IRC READ -> %s', $line));

   if(index($line, ':', 1) != -1)
   {
      @parv = split(/\s+/, substr($line, 0, index($line, ':', 1)));
      $message = substr($line, index($line, ':', 1) + 1, length($line)); 
   }
   else
   {
      @parv = split(/\s+/, $line);
   }

   push @parv, $message;

   if($parv[0] =~ /:/)
   {
      $parv[0] = substr($parv[0], 1, length($parv[0]));
   }
   else
   {
      unshift @parv, $IRC{HOST};
   }

   #parse the nick!user@host if it exists
   if($parv[0] =~ /([^!]+)!([^@]+)@(.*)/)
   {
      $source{nickname} = $1;
      $source{username} = $2;
      $source{hostname} = $3;
      $source{is_user}     = 1;
   }
   else { $source{is_user}   = 0; }
  
   
   if(exists($IRC_FUNCTIONS{$parv[1]}))
   {
      $IRC_FUNCTIONS{$parv[1]}(\@parv, \%source);
   }
}


# m_ping
#
# PING from server. 
#
# parv[0] = SOURCE
# parv[1] = PING
# parv[2] = PACKAGE
#

sub m_ping # \@parv, \%source
{
   my $parv = $_[0];
   irc_send(sprintf('PONG :%s', $$parv[2]));  
} 

# m_nick
#

sub m_nick
{
   my $parv = $_[0];
   my $conn;

   if(@$parv <= 3)
   {
      return;
   }
   shift @$parv;


   #Check if the NICK TS is older than last scan time, give TS_GRACE seconds grace
   if($$parv[$NICKFORMAT{TS}] < ($BOPM{LAST} + $BOPM{TS_GRACE}))
   {
      do_log(sprintf('BOPM -> Not scanning %s due to old TS (%d < %d + %d)',
                     $$parv[$NICKFORMAT{NICK}], $$parv[$NICKFORMAT{TS}], $BOPM{LAST} , $BOPM{TS_GRACE}));
      return;
   }
   

   $conn = sprintf('*** Notice -- Client connecting: %s (%s@%s) [%s] {class}',
                   $$parv[$NICKFORMAT{NICK}],
                   $$parv[$NICKFORMAT{USERNAME}],
                   $$parv[$NICKFORMAT{HOSTNAME}],
                   inet_ntoa(pack("N", $$parv[$NICKFORMAT{IP}])),
                  );

   #send hybrid connection notice
   irc_send(sprintf(':%s NOTICE %s :%s', $IRC{NAME}, $BOPM{NICK}, $conn)); 

   $BOPM{LAST} = time;
}
