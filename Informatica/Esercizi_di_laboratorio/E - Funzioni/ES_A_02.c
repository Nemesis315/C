/*
Auore: Matteo Conte
Classe: 3H
Data:21/01/2025

Esercizio: Scrivere una funzione chiamata "mcd" che prende in input due numeri interi
           e restituisce il loro massimo comune divisore utilizzando l'algoritmo di Euclide. 

Intput: 2 numeri interi
Elaborazione: la funzione "MCD" svolge i calcoli
Output: stampo a schermo l'MCD dei 2 numeri
*/


#include<stdio.h>

int MCD (int x ,int y);     //dichiaro la funzione MCD

int main()
{
    int Num1,Num2,Ris;      //Dichiaro 3 variabili

    printf("Inserire un numero intero positivo: ");     //chiedo all'utente di inserire un numero
    scanf("%d", &Num1);                                 //leggo in numero inserito dall'utente
    printf("Inserire un numero intero positivo: ");     //chiedo all'utente di inserire un numero
    scanf("%d", &Num2);                                 //leggo in numero inserito dall'utente

    Ris = MCD (Num1,Num2);                              //Chiamo la funzione MCD

    printf("L'MCD tra %d e %d e: %d", Num1,Num2,Ris);   //Stampo a schermo il risultato dell'MCD
    printf("\n");

    return 0;                                           //termino il programma
}

int MCD (int x, int y)  
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y -x;
        }
    }
    
    return x;
}
