# Tic-Tac-.-c
Spielregeln:

Zwei Spieler spielen abwechselnd.

Spieler 1 verwendet das Zeichen X

Spieler 2 verwendet das Zeichen O

Ziel: drei eigene Zeichen in einer Reihe, Spalte oder Diagonale

Matrix-Struktur:

Verwenden Sie ein 2D-Array char matrix[3][3] zur Darstellung des Spielfeldes.

Anfangs sind alle Felder leer (' ').

Spielablauf:

Das Spiel läuft in einer Schleife:

Spieler 1 gibt Koordinaten ein (X, Y)

Feld wird geprüft: Wenn belegt, wird der Spieler erneut aufgefordert

Danach ist Spieler 2 dran – ebenfalls mit Eingabe und Prüfung

Nach jedem Zug wird das Feld neu ausgegeben.

Gewinnprüfung:

Nach jedem Schritt wird geprüft:

Ob jemand eine ganze Zeile, Spalte oder Diagonale gefüllt hat

Wenn ja → Spielende mit Siegermeldung

Wenn alle Felder belegt, aber kein Gewinner → Unentschieden

Funktionen:
Das Spiel besteht aus mehreren selbst definierten Funktionen:

void lerre_gefuellte_matrix() → Initialisiert das Feld

void player1_schritt() / player2_schritt() → Eingabe und Setzen des Symbols

void print_matrix() → Ausgabe des Spielfeldes

char check_wer_gewonnen() → Überprüft Siegbedingungen
