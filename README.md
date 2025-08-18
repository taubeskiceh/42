## 42 School Cheat Sheet 

# https://manderc.com/types/index.php
# https://www.w3schools.com/c/c_functions.php
# 
Hauptüberprüfung

https://www.youtube.com/@IHaveNoClueI/videos


https://github.com/agavrel/42_CheatSheet?tab=readme-ov-file#first-by-installing-a-c-compiler-on-your-computer
https://github.com/agavrel/42_CheatSheet?tab=readme-ov-file#c-data-types




-- Häufige Anfängerfehler
0x00 - Array-Überlauf
0x01 - Segmentierungsfehler

Loop segfault
Ein häufiger Fehler ist, dass Sie eine Schleife erklärt haben und:
Vergessen, um den Tresen zu erhöhen
--------------------------------
int i = 0;
while (i < 10)
{
	write(1, &i + '0', 1);
	// but where is i++ ?
}
-----------------------------------
int i = 0;                    // Korrekter Weg
while (i < 10)
{
	write(1, &i + '0', 1);
    i++;
}
--------------------------------------
Die Ausgangslage vergessen:
int somevariable = 0;
while (42) // always True ! You will be 42 for life ;)
{
    // call to some stuff that never succeed to set someVariable to 1;
    if (somevariable == 1) // make sure that somevariable will equal 1 at some point.
        break ;
}
-------------------------------------
0x0E - Falsche Verwendung von Zeigern
Der falsche Weg, um Zeiger zu verwenden

void ft_swap(int *a, int *b)
{
	int *tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}

Die richtige Art, Zeiger zu verwenden

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
Tauschen ohne weitere Variable
Hauptüberprüfung
