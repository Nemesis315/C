/*
Autore: Matteo Conte
Classe: 3H
Data:21/10/2024

Input: importo spesa
Elaborazione: calcolo dello sconto
Output: Importo della spesa scontato
*/

#include <stdio.h>

int main()
{
    int spesa;

    printf ("Inserire l'importo della spesa \n");
    scanf("%d", &spesa);
    if (spesa>50)
    {
        spesa = [spesa-(spesa*5/100)];
    }
    return 0;
}