#!bin/sh
ifconfig | grep -E -o ..:..:..:..:..:..


# Verwenden Sie "ifconfig", um die Mac-Adresse zu erhalten, um das Ergebnis von "ifconfig", "grep" mit "-E" zu festigen
# und "-o", Argument "-E" ist für erweiterte regex, "-o" ist für das gleiche Muster, das Sie setzen. 
