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
    int num,contatore;

    printf("Inserire un numero intero: ");
    scanf("%d", &num);
    printf("\n");

    for ( contatore = 1; num <= contatore; contatore++)
    {
        if (num % contatore == 0)
        {
            printf("I divisori sono: %d ", contatore);
        }
        else
        {
            
        }
        
    }
    return 0;
}