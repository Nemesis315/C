/*
Auore: Matteo Conte
Classe: 3H
Data:21/10/2024

Input: tre lati di un triangolo
Elaborazione: determinare se e equilatero, isoscele, scaleno
Output: tipo di triangolo
*/

#include <stdio.h>

int main()
{
    //dichiarazione delle variabili
    int l1,l2,l3;
    printf("Inserisci il valore del primo lato: ");
    scanf ("%d", &l1);
    printf("\n");
    printf("Inserisci il valore del secondo lato: ");
    scanf ("%d", &l2);
    printf("\n");
    printf("Inserisci il valore del terzo lato: ");
    scanf ("%d", &l3);
    printf("\n");

    if (l1==l2)
    {
        if (l1==l3)
        {
            printf("Il triangolo e equilatero");
            printf("\n");
        }
        else
        {
            printf("Il triangolo e isoscle");
            printf("\n");
        }
         
    }
    else
    {
        if (l2==l3)
        {
            printf("Il triangolo e isoscele");
            printf("\n");
        }
        else
        {
            printf("Il triangolo e scaleno");
            printf("\n");
        }
        
        
    }
    return 0;
}