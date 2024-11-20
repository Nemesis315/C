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
    int num,contatore,somma;
    float media;
    contatore=0,somma=0;
    
    do
    {
        printf("Inserire il numero: \n ");
        scanf("%d", &num);
        somma=somma+num;
        contatore= contatore+1;
    } while (num != 0);

    media= somma/contatore;
    printf("Somma =%d", somma);
    printf("\n");
    printf("Media =%.1f", media);
    printf("\n");
    
    return 0; 
}