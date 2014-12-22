<?php
/* This script gets results from the DNSBL list which blitzed.org maintains.
 * It Gets its results by sending an IP adres to an XML interface
 * and its gets the results parsed by the XML.
 *
 * Thanks goes out to the Blitzed crew for helping us set this up.
 *
 * XML parser by codemastr <codemastr at axenet.org>
 * PHP scripting and layout by CaliMonk <calimonk at axenet.org>
 *
 * Axenet IRC Network 2003
 * January 11, 2003
 *
 * Feel free to use this script as you like, just leave the credits
 * to the people who deserve it.
 *
 * Version 1.0
 *
 */

/* Change the settings below to your liking.
 *
 * Be sure to point your kline/gline message for your BOPM
 * to whatever URL you run this script on. 
 *
 * For instance if you call this file bopm.php and put it on www.mysite.com
 * You should refer to that location in your BOPM kline/gline message
 * like for instance:
 * kline = "KLINE *@%h :Open Proxy found on your host. Please visit www.mysite.com/bopm.php?ip=%i for more information.";
 *
 */
 
// Some funky color settings, use as you like.
$cell_color  = "#EDE7E7"; // Color of the cells in the table
$top_color   = "#FFE1B5"; // Color of the table 'Header'
$linecolor   = "#000000"; // Color of the line

/* Redirection URL
 * Do NOT remove the %26, it stands for &
 * So the below URL points to http://www.axenet.org/index.php?page=op&removed=1&
 * Replacing %26 with a & will NOT work. (Be sure to add a %26 to the end of your Link!)
 */
$redirect    = "http://www.axenet.org/index.php?page=op%26removed=1%26";

/* Do not edit below this line unless you know what you are doing! */

echo "<TABLE CELLSPACING=1 CELLPADDING=2 width=500 align=center bgcolor=\"".$linecolor."\">";
echo "<TR><TD COLSPAN=4 bgcolor=\"".$top_color."\" align=center>Proxy report for ".$ip."</TD></TR>";

if ($removed == 1) {
 		switch ($error)	{
				case "removed":
						echo "<TR><TD bgcolor=\"".$cell_color."\">".$ip." has been removed from the proxy list. It may take up";
						echo "to 30 minutes for the proxy to actually be removed</td></tr></table>";
						return;
				case "cannot":
						echo "<TR><TD bgcolor=\"".$cell_color."\">".$ip." can not be removed from the proxy list.</td></tr></table>";
						return;
				case "nonefound":
						echo "<TR><TD bgcolor=\"".$cell_color."\">".$ip." was not found in the proxy list.</td></tr></table>";
						return;
		}
} 

// Opening the XML page to get the results
$stream = fopen("http://opm.blitzed.org/getXML?ip=".$ip."", "r");
if (!$stream) { echo "<TR><TD bgcolor=\"".$cell_color."\">Error getting results</td></tr></table>"; return; }
while (!feof($stream)) {
        $buffer .= fread($stream, 5000);
}

$xmlparser = xml_parser_create();
xml_parser_set_option($xmlparser,XML_OPTION_CASE_FOLDING,0);
xml_parser_set_option($xmlparser,XML_OPTION_SKIP_WHITE,1);
xml_parse_into_struct($xmlparser, $buffer, $XML_values, $XML_indexes);
xml_parser_free($xmlparser);
if ($XML_values[$XML_indexes["error"][0]])
{
        switch ($XML_values[$XML_indexes["error"][0]]["attributes"]["code"])
        {
                case 2:
                        echo "<TR><TD bgcolor=\"".$cell_color."\">Error: The specified IP does not appear in the database</td></tr></table>";
                        return;
                case 3:
                        echo "<TR><TD bgcolor=\"".$cell_color."\">Error: The specified IP could not be resolved</td></tr></table>";
                        return;
                default:
                        echo "<TR><TD bgcolor=\"".$cell_color."\">Error: " . $XML_values[$XML_indexes["error"][0]]["attributes"]["text"] . "</td></tr></table>";
                        return;
        }
}
echo "<TR><TD bgcolor=\"".$cell_color."\">Reported by " . $XML_values[$XML_indexes["reporter"][0]]["value"] . "</td></tr><TR><TD bgcolor=\"".$cell_color."\">";
if ($XML_values[$XML_indexes["active"][0]]["value"] == 1)
        echo "This proxy is currently active<BR>\n";
else
        echo "This proxy is not currently active<BR>\n";
echo "Type of Proxy:\n";
echo "<UL>";
for ($i = 0; $XML_values[$XML_indexes["type"][$i]]["value"]; $i++)
{
        echo "<LI>" . $XML_values[$XML_indexes["type"][$i]]["value"] . " (port: " . $XML_values[$XML_indexes["type"][$i]]["attributes"]["port"] . ")" .  "\n";
}
echo "</UL><P>";
echo "Proxy was first added to the database on " . $XML_values[$XML_indexes["first_added"][0]]["value"] . "<BR>\n";
echo "Proxy was last seen on " . $XML_values[$XML_indexes["last_seen"][0]]["value"] . "<BR>\n";
echo "<P>\n";
if ($XML_values[$XML_indexes["active"][0]]["value"] == 1) {
	echo "If you think this ban was made in error <A HREF=\"http://opm.blitzed.org/remove?ip=$ip&doit=1&redirect=".$redirect."\">click here to remove</A> the entry.<BR>\n"; 
	}
echo "</td></tr></table>";
?>
