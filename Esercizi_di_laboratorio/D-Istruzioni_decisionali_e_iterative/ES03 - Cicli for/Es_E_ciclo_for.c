/*
Auore: Matteo Conte
Classe: 3H
Data:11/12/2024

Esercizio: Si scriva un programma che calcoli il fattoriale di un numero intero N positivo dato dalla tastiera. 
           Si ricordi che il fattoriale di un numero n (simbolo n!) viene calcolato con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1.

Input: numero intero positivo da tastiera
Elaborazione: calcolo del fattoriale 
Output: risultato del fattoriale
*/

#include <stdio.h>

int main() 
{
    int N, cont, fattoriale = 1; //dichiaro le variabili

    
    printf("Inserisci un numero intero positivo: "); // Chiedo all'utente di inserire un numero positivo
    scanf("%d", &N); //leggo in numero postivo inserito dall'utente

    for (cont = 1; cont <= N; cont++) // Calcolare il fattoriale con un ciclo for
    {
        fattoriale *= cont; 
    }

    printf("Il fattoriale di %d è: %d\n", N, fattoriale); // Stampo a schermo il risultato

    return 0;
}