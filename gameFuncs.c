#include "gameFuncs.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gameloop(int zuRatendeZahl);

struct zahlen oneplayer() {
    // Initialisiere den Zufallszahlengenerator
    srand(time(NULL));
    struct zahlen Zahlen;
    Zahlen.zuRatendeZahl = rand() % 100 + 1;;

    system("cls");

    Zahlen.versuche = gameloop(Zahlen.zuRatendeZahl);

    return Zahlen;
}

struct zahlen twoplayer() {

    struct zahlen Zahlen;

    system("cls");

    printf("Spieler 1 bitte gib die zu ratende Zahl ein [1 - 100]: ");
    scanf("%d", &Zahlen.zuRatendeZahl);

    system("cls");
    printf("Nun ist Spieler 2 an der Reihe.\n");

    Zahlen.versuche = gameloop(Zahlen.zuRatendeZahl);

    return Zahlen;
}

int gameloop(int zuRatendeZahl) {
    int gerateneZahl;
    int win = 0;
    int counter = 1;

    do {
        printf("Zahl: ");
        scanf("%d", &gerateneZahl);

        if (gerateneZahl < zuRatendeZahl) {
            printf("zu Klein\n");
            counter++;
        }
        else if (gerateneZahl > zuRatendeZahl) {
            printf("zu Gross\n");
            counter++;
        }
        else if (gerateneZahl == zuRatendeZahl) {
            printf("Richtig\n");
            win = 1;
        }

    } while (win == 0);
    return counter;
}