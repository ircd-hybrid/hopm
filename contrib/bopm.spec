Summary: A daemon that protects an IRC server from insecure proxies.
Name: bopm
Version: 2.31
Release: 1
Copyright: GPL
Group: Applications/System
Source: http://www.blitzed.org/bop/files/%{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-root
URL: http://www.blitzed.org/bopm/

%description
The Blitzed Open Proxy Monitor is designed to connect to an IRC
server and become an IRC operator.  It then watches connect notices
in order to scan all connecting clients for open (insecure) proxies.
Such insecure proxies are commonly used for spamming, floods and other
abusive activities.

BOPM can detect WinGates, HTTP proxies, SOCKS 4/5 proxies and Cisco
routers with default passwords.  BOPM also has support for checking
against a DNS-Based Blacklist (similar to MAPS RBL) and can be
configured to report new proxies back to the Blitzed Open Proxy
Monitoring project.

For more details please see http://www.blitzed.org/bopm.

%prep
%setup -q

%build
rm -rf $RPM_BUILD_ROOT
./configure --prefix=/usr --localstatedir=/var/log
make

%install
install -d $RPM_BUILD_ROOT/usr/bin
install -d $RPM_BUILD_ROOT/etc
install -m755 -s src/bopm $RPM_BUILD_ROOT/usr/bin
install -m755 -s src/bopchecker $RPM_BUILD_ROOT/usr/bin
install -m600 bopm.conf.sample $RPM_BUILD_ROOT/etc/bopm.conf

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%doc README INSTALL ChangeLog
%{_bindir}/bopm
%{_bindir}/bopchecker
%config %{_sysconfdir}/bopm.conf

%changelog
* Sun May 26 2002 Andy Smith <grifferz@blitzed.org>
- Initial RPM attempt
