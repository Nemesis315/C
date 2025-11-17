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

int area_rettangolo (int base,int altezza);     //dichiaro la funzione area_rettangolo che chiede 2 interi

int main()
{
    int base,altezza,Area;       //Dichiaro 3 variabili di tipo intero

    printf("Inserire un numero intero: ");      //chiedo all'utente di inserire un numero intero che sarà la base del rettangolo
    scanf("%d", &base);                         //leggo il valore inserito dall'utente
    printf("Inserire un numero intero: ");      //chiedo all'utente di inserire un numero intero che sarà l'alteza del rettangolo
    scanf("%d", &altezza);                      //leggo il valore inserito dall'utente

    Area = area_rettangolo(base,altezza);       //Chiamo la finzione area_rettangolo

    printf("L'area tra %d e %d e: %d", base,altezza,Area);      //stampo a schermo il risultato dell'area
    printf("\n");
    

    return 0;       //termino il programma 
}

int area_rettangolo (int base,int altezza)      
{
    int area;       //dichiaro una variabile area 
    
    area = base * altezza;      //Moltiplico la base per l'altezza 

    return area;        //termino la funzione con il risultato dell'area
}