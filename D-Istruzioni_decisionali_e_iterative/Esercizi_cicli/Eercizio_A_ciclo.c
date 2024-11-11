/*
Auore: Matteo Conte
Classe: 3H
Data:11/11/2024

Input: sequenza di numeri
Elaborazione: calcolo della media
Output: valore della media
*/

#include<stdio.h>

int main()
{
    //dichiarazione delle variabili
    int num,media,contatore,somma;
    contatore=0;
    somma=0;

    //
    do
    {
        printf("Inserire il numero \n ");
        scanf("%d", &num);
        somma=somma+num;
        contatore= contatore+1;
    } while (num != 0);

    //
    media= somma/contatore;
    printf("Media =%d", media);
    printf("\n");
    printf("Somma =%d", somma);
    printf("\n");
    
    return 0; 

}