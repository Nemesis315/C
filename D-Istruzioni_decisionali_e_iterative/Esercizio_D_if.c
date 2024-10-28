/*
Autore: Matteo Conte
Classe: 3H
Data:21/10/2024

Input: tre numeri interi distinti
Elaborazione: controllo maggiore e minore
Output: determinare maggiore e minore
*/

#include <stdio.h>

int main()
{
    //dichiarazione della variabili
    int num1,num2,num3;

    //Input e lettura delle variabili inserite da tastiera
    printf("Inserisci il valore numerio di num1: ");
    scanf("%d", &num1);
    printf("\nInserisci il valore numerico di num2: ");
    scanf("%d", &num2);
    printf("\nInsersci il valore numerico di num3: ");
    scanf("%d", &num3);
    printf("\n");

    if (num1>num2)
    {
        if (num1>num3)
        {
            if (num2>num3)
            {
                printf("Il maggiore e %d il minore e %d", num1,num3);
            }
            else
            {
                printf("Il maggiore e %d il minore e %d", num1,num2);
            }
            
                  
        }
        
    }
    else
    {
        
    }


    return 0;
}