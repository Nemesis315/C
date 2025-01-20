/*
Auore: Matteo Conte
Classe: 3H
Data:20/01/2025

Esercizio: Scrivere una funzione chiamata "area_rettangolo" che prende in input la base e l'altezza di un rettangolo e restituisce l'area.

Intput: 2 numeri interi
Elaborazione: la funzione "area_rettangolo" svolge i calcoli
Output: stampo a schermo l'area del rettangolo
*/


#include<stdio.h>

int area_rettangolo (int base,int altezza);

int main()
{
    int base,altezza;
    int Area;

    printf("Inserire un numero intero: ");
    scanf("%d", &base);
    printf("Inserire un numero intero: ");
    scanf("%d", &altezza);

    Area = area_rettangolo(base,altezza);

    printf("La media tra %d e %d e: %.1f", base,altezza,Area);
    printf("\n");
    

    return 0;
}

int area_rettangolo (int base,int altezza)
{
    
   
    
}