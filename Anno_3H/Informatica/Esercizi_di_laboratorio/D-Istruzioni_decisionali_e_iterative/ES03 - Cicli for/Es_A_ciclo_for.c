/*
Auore: Matteo Conte
Classe: 3H
Data:25/11/2024

Esercizio: Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori. aggiungere la tabella di traccia.

Input: numero intero
Elaborazione: divisori del numero 
Output: stampo a schermo tutti i divisori
*/

#include<stdio.h>

int main() 
{
    int num, contatore;

    // Richiesta dell'input
    printf("Inserisci un numero intero: ");
    scanf("%d", &num);

    // Stampa i divisori del numero
    printf("I divisori di %d sono:\n", num);

    for (contatore = 1; contatore <= num; contatore++) {
        if (num % contatore == 0) {
            printf("%d\n", contatore);
        }
    }

    return 0;
}