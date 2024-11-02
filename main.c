/* Spiel Zahlenraten
 * Version 1:
 * 1. Spieler gibt zu ratende Zahl ein [zwischen 1 und 100]
 *    Anschließend wird die Zahl ausgeblendet.
 * 2. Spieler rät,
 *    Programm antwortet mit "zu klein", "zu groß" oder "richtig"
 *
 * 1. Erweiterung: Spieler soll so lange raten können, bis richtig
 * 2. Erweiterung: inkl. Statistik
 *
 * Version 2:
 * Für einen Spieler
 * Computer wählt zu ratende Zahl zufällig.
 */

#include <stdio.h>
#include <stdlib.h>
#include "gameFuncs.h"

int main(void) {
    char auswahl;
    struct zahlen Zahlen;
    do {
        system("cls");
        printf("Lass uns ein Spiel spielen.\n");
        printf("Wie waere es mit Zahlenraten?\n");
        printf("(1) Spieler\n");
        printf("(2) Spieler\n");
        printf("(3) Ende\n");
        printf("Auswahl: ");
        scanf(" %c", &auswahl);

        switch (auswahl) {
            case '1':
                Zahlen = oneplayer();
                break;
            case '2':
                Zahlen = twoplayer();
                break;
            case '3':
                exit(0);
                break;
            default:
                printf("Irgendwas ist schief gelaufen.\n");
                system("pause");
                continue;
        }

        system("cls");
        printf("Herzlichen Glueckwunsch,\n");
        printf("du hast die Zahl %d mit %d Versuchen gefunden.\n", Zahlen.zuRatendeZahl, Zahlen.versuche);
        system("pause");
    } while (auswahl != 3);
    return 0;
}
