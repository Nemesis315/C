#include <stdio.h>



int main() {
    int N, i, fattoriale = 1;

    // Chiedere all'utente di inserire un numero
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &N);

    // Calcolare il fattoriale con un ciclo for
    for (i = 1; i <= N; i++) {
        fattoriale *= i;
    }

    // Stampare il risultato
    printf("Il fattoriale di %d è: %d\n", N, fattoriale);

    return 0;
}
