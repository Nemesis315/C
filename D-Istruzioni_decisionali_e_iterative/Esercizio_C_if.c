/*
Autore: Matteo Conte
Classe: 3H
Data:21/10/2024

Input: importo della spesa
Elaborazione: calcolo dello sconto
Output: spesa scontata
*/

#include <stdio.h>

int main()
{
    //dichiarazione delle variabili
    int spesa;

    //scrittura e lettura della varibile spesa
    printf("Inserisci l'importo della spesa: ");
    scanf ("%d", &spesa);
    printf("\n");
    
    
    if (spesa>50)
    {
        if (spesa>100)
        {
            spesa= (spesa-(spesa*10/100));
            printf ("Importo da pagare = %d", spesa);
            printf("\n");
        }
        else
        {
           spesa= (spesa-(spesa*5/100)); 
           printf ("Importo da pagare = %d" , spesa);
           printf("\n");          
        }
        
    }
    else
    {
        printf ("Nessuno sconto applicabile l'importo da pagare e : %d", spesa);
        printf("\n");
    }
    return 0;
}
