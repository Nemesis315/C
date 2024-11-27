/*
Auore: Matteo Conte
Classe: 3H
Data:26/11/2024

Esercizio: Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15.

Elaborazione: divisori di 15 
Output: stampo a schermo tutti i divisori di 15
*/

#include <stdio.h>

int main() 
{
    int Div1,Div2;
    
    // Visualizza tutte le coppie di numeri naturali la cui somma è 15
    printf("Le coppie ordinate di numeri naturali la cui somma è 15 sono:");
    printf("\n");
    
    for (Div1 = 0; Div1 <= 15; Div1++) 
    {
        for (Div2 = 0; Div2 <= 15; Div2++) 
        {
            if (Div1 + Div2 == 15) 
            {
                printf("(%d, %d)", Div1, Div2);
                printf("\n");
            }
        }
    }
    
    return 0;
}