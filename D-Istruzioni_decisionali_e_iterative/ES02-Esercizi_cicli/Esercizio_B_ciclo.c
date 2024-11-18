/*
Auore: Matteo Conte
Classe: 3H
Data:12/11/2024

Scrivere un programma in C che chiesti 2 numeri interi all’utente, stampi sul monitor tutti i numeri compresi fra i 2 interi,
Es. se i numeri inseriti sono 4 e 12 stampare 4,5,6,7,8,9,10,11,12.

Input: 2 numeri interi
Elaborazione: numeri tra i 2 numeri iniziali
Output: numeri compresi tra i 2 iniziali
*/

#include<stdio.h>

int main()
{
    //dichiarazione delle variabili
    int num1,num2;

    printf("Inserire un numero intero");
    scanf("%d", &num1);
    printf("\n");
    printf("Inserire un secondo numero intero");
    scanf("%d", &num2);
    printf("\n");

    //controllo se num1>num2
    if (num1>num2)
    {
        printf("%d", num1);
        do
        {
            num1=num1--;
            printf("%d", num1);
        } while (num1!=num2);
        
    }
    else
    {
        printf("%d", num2);
        do
        {
            num2=num2--;
            printf("%d", num2);
        } while (num2!=num1);
        
    }
    return 0;
}