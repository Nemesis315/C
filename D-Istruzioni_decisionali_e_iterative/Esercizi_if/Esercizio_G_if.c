/*
Autore: Matteo Conte
Classe: 3H
Data:04/11/2024

letto un carattere da tastiera visualizzare a schermo il carattere e i corrispondenti codici ascii in decimale e esadecimale

Input: carattere da tastiera 
Elaborazione: codice ascii in decimale è esadecimale
Output: stampare a schermo il valore corrispondente in codice ascii in decimale è esadecimale
*/

#include<stdio.h>

int main()
{
    // dichiarazione delle variabile
    char carattere;

    printf("Inserire il carattere: ");
    scanf("%c", &carattere);
    printf("\n");
    
    printf("Il carattere inserito e' : %c", carattere);
    printf("\n");
    printf("Codice ASCII (decimale): %d", carattere);
    printf("\n");
    printf("Codice ASCII (esadecimale): %x ", carattere);
    printf("\n");

    return 0;
}