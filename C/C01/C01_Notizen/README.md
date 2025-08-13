C 01 ist die zweite C-Übungsliste in der C-Piscine, und das Hauptthema sind Pointer (Zeiger).

Pointer sind ein grundlegendes Konzept in der Programmiersprache C und bilden zentrale Bausteine.
Sie speichern Speicheradressen von Variablen, Funktionen oder sogar anderen Pointern.
Mit Pointern können C-Programmierer Speicher auf niedriger Ebene ansprechen, Speicher dynamisch reservieren und viele weitere Funktionen innerhalb der Sprache umsetzen.
Einige der Themen in C 01:
Pointer

    Deklaration, Initialisierung und Zuweisung von Pointern

    Dereferenzierung von Pointern und Zugriff auf den Wert, auf den sie zeigen

    Pointer-Arithmetik und entsprechende Operationen

    Pointer an Funktionen übergeben und damit Daten verändern

    Pointer auf Pointer (Doppelpointer) und deren Anwendungsgebiete

Arrays

    Deklarieren und Verwenden von Arrays zur Speicherung mehrerer Werte

    Zugriff auf Array-Elemente und Ausführen von Array-Operationen

    Arrays sortieren und nach Elementen suchen

Strings und Zeichen

    Arbeiten mit Strings, einschließlich String-Literalen und String-Funktionen

    Verwendung von Zeichen-Arrays und Pointern zur Bearbeitung von Strings

Module / Übungen in C 01

    ft_ft – Einen Integer-Wert über einen Pointer setzen

    ft_ultimate_ft – Einen Integer-Wert über mehrere Ebenen von Pointern setzen

    ft_swap – Zwei Integer-Werte über Pointer vertauschen

    ft_div_mod – Division und Modulo zweier Zahlen berechnen und per Pointer ausgeben

    ft_ultimate_div_mod – Division und Modulo mit direkten Pointer-Manipulationen durchführen

    ft_putstr – Einen String auf der Standardausgabe ausgeben

    ft_strlen – Länge eines Strings berechnen

    ft_rev_int_tab – Ein Integer-Array umkehren

    ft_sort_int_tab – Ein Integer-Array sortieren

    
Muster & Merksätze (für alles wiederverwendbar)

    Dereferenzieren: *p → „Inhalt an Adresse p“.

    Swap-Template: tmp = a; a = b; b = tmp; (mit * wenn über Pointer).

    Division/Rest: div = a / b; mod = a % b;

    String-Ende: while (*s) ... oder Index-Variante bis '\0'.

    Array von beiden Enden: i=0, j=size-1; while (i<j) swap(...);

    Sort-Gerüst: äußere i bis size-2, innere j ab i+1.

    Nur Gefordertes. In Turn-ins keine Tests/Includes/printf.

Teststrategie (schnell & sicher)

    Benutze deine ultra-kleine main.c mit putnbr.

    Teste Randwerte: leer/1-Element-Array, negative Zahlen, Duplikate, extremes Zeichenverhalten.

    Für String-Funktionen stets "" mitprüfen.

Typische Norm-Fehler (und Fix)

    Kommentare im Body → raus (Kommentare nur „außerhalb“ oder am Zeilenende).

    Deklaration & Init in einer Zeile → in Funktionen trennen (außer static/const).

    Zu lange Zeilen → umbrüche setzen.

    Falsche Einrückung → echte Tabs aktivieren.

    Verbotene Konstrukte → while statt for, kein ?:, keine VLAs.
