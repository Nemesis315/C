#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define N 10

void Istogramma(int v[]);






int main()
{
    int Vettore[N]; //Dichiaro un Vettore
    

    srand(time(NULL)); //Imposto il la generazione di numeri casuali.

    // Dichiarare e inizializzare l'array con numeri casuali tra 0 e 20
    for (int i = 0; i < N; i++)
    {
        Vettore[i] = rand() % 21; //Assegna a ciascun elemento un numero casuale tra 0 e 20
    }









}


void Istogramma(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d: ", v[i]);  
        
    }
    
}



void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d", v[i]);
        printf("\n");
    }
    
}
