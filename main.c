#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int MIN = 0;
    const int MAX = 6;
    int n, num, vite = 3;
    int ninsert = 0;
    srand(time(NULL));
    n = rand() % (MAX - MIN + 1) + MIN;

    printf("Indovina il numero tra %d e %d. Hai %d vite.\n", MIN, MAX, vite);

    while (vite > 0 && !ninsert) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);

        if (num < MIN || num > MAX) {
            printf("Numero non valido. Inserisci un numero tra %d e %d.\n", MIN, MAX);
        } else if (num < n) {
            printf("Il numero generato e' piu' grande.\n");
            vite--;
        } else if (num > n) {
            printf("Il numero generato e' piu' piccolo.\n");
            vite--;
        } else {
            printf("Hai indovinato il numero!\n");
            ninsert = 1;
        }

        if (vite > 0 && !ninsert) {
            printf("Vite rimaste: %d\n", vite);
        } else if (vite == 0 && !ninsert) {
            printf("Numero di vite finite. Hai perso!\n");
            printf("Il numero generato era: %d\n", n);
        }
    }

}
