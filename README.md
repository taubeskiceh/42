# 42 Norm

 – Benennung
 • Strukturen beginnen mit s_, typedefs mit t_, unions mit u_, enums mit e_, globale Variablen mit g_
 • Nur Kleinbuchstaben, Zahlen und Unterstriche (snake_case) erlaubt
 • Keine Sonderzeichen (außer in Strings/Char)
 (*) Namen müssen verständlich, englisch lesbar und durch Unterstriche getrennt sein
 • Globale Variablen müssen const oder static sein (außer das Projekt erlaubt es)
 • Dateien müssen kompilieren können – sonst nicht normkonform



 – Formatierung
 • Max. 25 Zeilen pro Funktion (Klammern nicht gezählt) • Max. 80 Zeichen pro Zeile • Tab = echte
 Tabulatoren (ASCII 9), keine Leerzeichen
 • Eine Funktion pro Zeile, getrennt durch Leerzeile • Deklarationen am Anfang der Funktion, eine
 Variable pro Zeile
 • Kein ; oder # 42 Norm 

 – Benennung
• Strukturen beginnen mit s_, typedefs mit t_, unions mit u_, enums mit e_, globale Variablen mit g_
• Nur Kleinbuchstaben, Zahlen und Unterstriche (snake_case) erlaubt
• Keine Sonderzeichen (außer in Strings/Char)
(*) Namen müssen verständlich, englisch lesbar und durch Unterstriche getrennt sein
• Globale Variablen müssen const oder static sein (außer das Projekt erlaubt es)
• Dateien müssen kompilieren können – sonst nicht normkonform



 – Formatierung
• Max. 25 Zeilen pro Funktion (Klammern nicht gezählt) • Max. 80 Zeichen pro Zeile • Tab = echte
Tabulatoren (ASCII 9), keine Leerzeichen
• Eine Funktion pro Zeile, getrennt durch Leerzeile • Deklarationen am Anfang der Funktion, eine
Variable pro Zeile
• Kein ; oder , ohne Leerzeichen danach • Keine zwei Leerzeilen oder Leerzeichen hintereinander •
Keine Leerzeichen am Zeilenende • Pointerstern gehört an den Variablennamen: char *ptr; • if,
while usw. brauchen immer geschweifte Klammern (außer Einzeiler)


 – Funktionen
• Max. 4 benannte Parameter • Parameter müssen benannt sein • Funktionen ohne Parameter
brauchen (void)
• Max. 5 lokale Variablen • return-Wert in Klammern: return (x);
• Zwischen Rückgabetyp und Funktionsname steht ein Tab


 – typedef, struct, enum, union
• Zwischen „struct“, „enum“, „union“ und dem Namen steht ein Leerzeichen
• Innerhalb von Klammern gelten normale Einrückungsregeln
• typedef-Namen müssen korrekt eingerückt sein
• Strukturen dürfen nicht in .c-Dateien deklariert werden – nur in .h-Dateien


 – Header-Dateien
(*) Erlaubte Inhalte: Includes, Defines, Deklarationen, Makros, Prototypen
• Alle Includes stehen am Anfang der Datei • Keine .c-Dateien inkludieren
• Header müssen gegen doppelte Einbindung geschützt sein (mit #ifndef ... #endif)
(*) Keine ungenutzten Includes
• Include-Gründe dürfen kommentiert werdenKapitel


 – Der 42-Header
• Jede .c- und .h-Datei beginnt mit dem standardisierten 42-Header-Kommentarblock
(*) Der Header muss aktuell sein: Autor, Datum, letzte Änderung
• Tools wie Vim oder Emacs können ihn automatisch einfügen – persönliche Daten ggf. anpassen


 III.7 – Makros und Präprozessoren
(*) Nur für konstante/literale Werte (#define MAX 10)
(*) Keine Makros zum Verstecken von Logik oder Umgehen der Norm
(*) Nur Makros aus Bibliotheken, wenn explizit erlaubt
• Mehrzeilige Makros sind verboten • Makro-Namen in GROSSBUCHSTABEN • Präprozessoren
dürfen nicht innerhalb von Funktionen stehen


– Verbotene Dinge
Verbotene Sprachkonstrukte:
■ for ■ do...while ■ switch / case ■ goto ■ ternary (x ? y : z) ■ VLAs (Variable Length Arrays) ■
implizite Typen
→ Verwende while, if/else, malloc, klare Rückgaben, und saubere Blöcke

 – Kommentare
• Kommentare dürfen nur am Zeilenende oder allein stehen
(*) Müssen nützlich und auf Englisch sein
(*) Kommentare dürfen keine schlechte Funktion rechtfertigen (z. B. f1, a, b)
→ Vermeide unklare oder verschleiernde Funktionen, die nur die Norm austricksen sollen


 – Dateien
• Keine .c-Dateien in andere .c-Dateien einbinden
• Max. 5 Funktionsdefinitionen pro .c-Datei
→ Besser aufteilen in mehrere Dateien wie utils.c, init.c, etc.


 – Makefile
• Muss Regeln enthalten: all, clean, fclean, re, $(NAME)
• all muss die Standardregel sein
• Keine unnötigen Rebuilds → sonst nicht funktionsfähig
• Bei mehreren Binaries: je eine Regel
• Eigene Libraries (z. B. libft) müssen automatisch gebaut werden
• Keine *.c oder *.o – alle Dateien explizit auflisten



Example:



for-Schleife 

Was passiert da?

for (int i = 0; i < 10; i++)
	printf("%d\n", i);
Iteration (i++)

Alle drei stehen direkt nebeneinander im Kopf – übersichtlich, aber kompakt & dicht gepackt.

Warum verboten?
→ 42 möchte, dass du jede Schleife ganz deutlich schreibst, z. B. mit while.
Die Reihenfolge soll einzeln und sichtbar sein – das hilft dir, bewusster zu programmieren.



 do...while
  Was passiert da?

do
{
    printf("%d\n", i);
	    i++;
		} while (i < 10);

Eine Schleife, die mindestens einmal ausgeführt wird, auch wenn die Bedingung falsch ist

Die Bedingung kommt erst am Ende

Warum verboten?
→ Sie versteckt die Bedingung – du siehst sie erst nach dem Block.
Bei 42 soll jede Schleife vorher zeigen, wann sie abbricht → deshalb: nur while!

switch & case                                                                      

Die for-Schleife ist eine kompakte Schleife mit 3 Teilen:

Initialisierung (int i = 0)
Bedingung (i < 10)
Iteration (i++)

Alle drei stehen direkt nebeneinander im Kopf – übersichtlich, aber kompakt & dicht gepackt.

Warum verboten?
→ 42 möchte, dass du jede Schleife ganz deutlich schreibst, z. B. mit while.
Die Reihenfolge soll einzeln und sichtbar sein – das hilft dir, bewusster zu programmieren.



 do...while
 Was passiert da?

do
{
	printf("%d\n", i);
	i++;
} while (i < 10);

Eine Schleife, die mindestens einmal ausgeführt wird, auch wenn die Bedingung falsch ist

Die Bedingung kommt erst am Ende

Warum verboten?
→ Sie versteckt die Bedingung – du siehst sie erst nach dem Block.
Bei 42 soll jede Schleife vorher zeigen, wann sie abbricht → deshalb: nur while!

switch & case
Was passiert da?

switch (key)
{
	case 1: printf("eins"); break;
	case 2: printf("zwei"); break;
	default: printf("anderes");
}

Wird für viele "Fallunterscheidungen" benutzt
Der Code springt direkt zu passendem case, wenn key == 1, 2, etc.

 Warum verboten?
→ Die Struktur ist weniger klar als if-else if und kann zu Fehlern durch fallthrough führen, wenn man break vergisst. Außerdem ist die Ausführung nicht linear sichtbar, was 42 vermeiden will.


goto
Was passiert da?

if (error)
	goto fail;

...

fail:
	return (1);

Springt direkt zu einem anderen Punkt im Code
Man kann Schleifen & Blöcke überspringen oder verlassen

Warum verboten?
→ goto macht den Code unlesbar – man verliert leicht die Übersicht.
42 will, dass dein Programmfluss klar und lesbar bleibt – also nur kontrollierte Strukturen wie if, while, return, break.


Ternary-Operator (? :)
Was passiert da?

res = (x > 0) ? x : -x;179

Alle drei stehen direkt nebeneinander im Kopf – übersichtlich, aber kompakt & dicht gepackt.

Warum verboten?
→ 42 möchte, dass du jede Schleife ganz deutlich schreibst, z. B. mit while.
Die Reihenfolge soll einzeln und sichtbar sein – das hilft dir, bewusster zu programmieren.



 do...while
  Was passiert da?

do
{
    printf("%d\n", i);
	    i++;
		} while (i < 10);

Eine Schleife, die mindestens einmal ausgeführt wird, auch wenn die Bedingung falsch ist

Die Bedingung kommt erst am Ende

Warum verboten?
→ Sie versteckt die Bedingung – du siehst sie erst nach dem Block.
Bei 42 soll jede Schleife vorher zeigen, wann sie abbricht → deshalb: nur while!

switch & case
Was passiert da?

switch (key)
{
    case 1: printf("eins"); break;                                                                                                                                     
    case 2: printf("zwei"); break;
	    default: printf("anderes");
		}

Wird für viele "Fallunterscheidungen" benutzt
Der Code springt direkt zu passendem case, wenn key == 1, 2, etc.

 Warum verboten?
 → Die Struktur ist weniger klar als if-else if und kann zu Fehlern durch fallthrough führen, wenn man break vergisst. Außerdem ist die Ausführung nicht linear sichtbar, was 42 vermeiden will.


goto
Was passiert da?

if (error)
    goto fail;

...

fail:
    return (1);

Springt direkt zu einem anderen Punkt im Code
Man kann Schleifen & Blöcke überspringen oder verlassen

Warum verboten?
→ goto macht den Code unlesbar – man verliert leicht die Übersicht.
42 will, dass dein Programmfluss klar und lesbar bleibt – also nur kontrollierte Strukturen wie if, while, return, break.                                                                      

Kurzform von:

if (x > 0)
	res = x;
else
	res = -x;

Oft verwendet, um kleine Entscheidungen in einer Zeile zu treffen

 Warum verboten?
→ Kompakt, aber weniger lesbar, besonders wenn verschachtelt.
Bei 42 geht’s darum, dass jede Entscheidung klar sichtbar ist – also lieber if / else.


VLA (Variable Length Array)
Was passiert da?

int n;
scanf("%d", &n);
int arr[n]; //  VLA

Ein Array, dessen Größe erst zur Laufzeit bekannt ist (nicht beim Kompilieren!)

Standard-C erlaubt das teilweise, aber es ist unsicher und nicht portabel

Warum verboten?
→ Speicher ist nicht kontrolliert, keine Möglichkeit auf Fehler zu prüfen
42 will, dass du Speicher bewusst und sicher verwaltest → siehe malloc



Dynamische Speicherreservierung mit malloc
Was passiert da?
int	*numbers;
numbers = malloc(sizeof(int) * n);
Reserviert Speicher zur Laufzeit im Heap (dynamisch)

Du musst den Speicher später selbst mit free() freigeben

 Warum erlaubt?
→ Klarer, kontrollierter Umgang mit dynamischem Speicher.
Du weißt genau, wann du Speicher nimmst – und wann du ihn zurückgibst.

Impliziter Typ
Was passiert da?


--------------------------------------
var x = 5; // oder einfach x = 5; ohne Typ
In C nicht erlaubt – aber manche Sprachen (z. B. C++, JavaScript) erlauben das

Man lässt den Datentyp weg, und der Compiler „errät“ ihn

Warum verboten?
→ C ist strikt typisiert. Alles muss klar typisiert sein, sonst wird der Code unsicher oder unverständlich
→ 42 will, dass du genau weißt, welcher Typ was ist – kein Raten, kein Verstecken



