//Schemi sui comandi per i vettori

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void stampa_array(int v[]);




//  1). Dichiare una costante che indica il numero di variabili all'interno del vettore
 
#define N 11

// ATTENAZIONE: L'indice del vettore parte da 0 e arriva fino a N-1


int main()
{
  int vettore[N];


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