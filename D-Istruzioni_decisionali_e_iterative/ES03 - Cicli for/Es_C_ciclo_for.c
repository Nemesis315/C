/*
Auore: Matteo Conte
Classe: 3H
Data:27/11/2024

Esercizio: Scrivere un programma che letto un numero intero da tastiera, stampi tutti  i suoi divisori (stampa nel ciclo!) 
e quindi visualizzi una sola volta (fuori dal ciclo) se è un numero primo o non lo è.

Input: numero intero
Elaborazione: divisori del numero e se e un numero primo
Output: stampo a schermo tutti i divisori e numero primo
*/

#include <stdio.h>

int main() 
{
    int n, i;

    // Leggi un numero intero da tastiera
    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    // Stampiamo i divisori del numero
    printf("I divisori di %d sono: ", n);
    for(i = 1; i <= n; i++) 
    {
        if (n % i == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Verifica se il numero è primo
    int isPrime = 1; // Assume che il numero sia primo
    for(i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            isPrime = 0; // Se il numero è divisibile per un altro numero oltre a 1 e se stesso, non è primo
            break;
        }
    }

    // Stampa se il numero è primo o no
    if (isPrime && n > 1) 
    {
        printf("%d è un numero primo.\n", n);
    } 
    else 
    {
        printf("%d non è un numero primo.\n", n);
    }

    return 0;
}