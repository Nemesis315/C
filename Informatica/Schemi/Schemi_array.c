//Schemi sui comandi per i vettori

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void stampa_array(int v[]);

void ordina_vettore(int v[]);




//  1). Dichiare una costante che indica il numero di variabili all'interno del vettore
 
#define N 11 // Esempio

// ATTENAZIONE: L'indice del vettore parte da 0 e arriva fino a N-1


int main()
{

    // 2). Dichiarazione di un vettore di tipo intero
    
    //     Scecificare il nome della variabile
         
    //     ATTENZIONE: Se si vuole dichiare un vettore e obbligatorio mettere le parentesi quadre a fianco alla variabile e poi inserire all'interno delle parentesi
    //                 la costante per indicare il numero di variabili che può contenere il vettore/array.

    int vettore[N];   //Esempio


    srand(time(NULL));


   for (int i = 0; i < N; i++)
   {
       vettore[i] = rand() % 11;
   }

    // 3). Funzione con i vettori

    //     ATTENZIONE: Quando si usa un vettore all'interno della funzione si modifica anche il contenuto del vettore all'interno del main

    ordina_vettore(vettore);

    stampa_array(vettore); 

}



 void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        // 4). Come stampare il contenuto del vettore

        //     ATTENZIONE: Per stampare il contenuto di una casella di un vettore bisogna scrivere il vettore e l'indice in cui si trova il numero desiderato

        printf("I voti che hai inserito sono: %d", v[i]); // Esempio
        printf("\n");
    }
    
}

void ordina_vettore(int v[])
{
    int z;

    for (int i = 0; i < N - 1 ; i++)
    {
        for (int j = i +1; j < N; j++)
        {
            if (v[i] > v[j])
            {
                z = v[i];

                v[i] = v[j];

                v[j] = z;
            }
            
            
        }
        
    }
    
}