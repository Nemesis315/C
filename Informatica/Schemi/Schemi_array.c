//Schemi sui comandi per i vettori

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void stampa_array(int v[]);




//  1). Dichiare una costante che indica il numero di variabili all'interno del vettore
 
#define N 11 // Esempio

// ATTENAZIONE: L'indice del vettore parte da 0 e arriva fino a N-1


int main()
{

    // 2). Dichiarazione di un vettore di tipo intero
    
    //     Scecificare il nume della variabile
         
    //     ATTENZIONE: Se si vuole dichiare un vettore e obbligatorio mettere le parentesi quadre a fianco alla variabile e poi inserire all'interno delle parentesi
    //                 la costante per indicare il numero di variabili che può contenere il vettore/array.

    int vettore[N];   //Esempio


    srand(time(NULL));


   for (int i = 0; i < N; i++)
   {
       vettore[i] = rand() % 21;
   }


    stampa_array(vettore);

 }



 void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("I voti che hai inserito sono: %d", v[i]);
        printf("\n");
    }
    
}