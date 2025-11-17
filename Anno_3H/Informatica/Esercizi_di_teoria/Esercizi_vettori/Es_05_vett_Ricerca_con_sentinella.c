#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int RicercaSentinella(int v[], int num);

void stampa_array(int v[]);

int main()
{
    int vettore[N];
    int numero;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        vettore[i] = rand() % 21;
    }

    printf("Inserire il numero da cercare all'interno del vettore (compreso tra 1-20): ");
    scanf("%d", &numero);


    int r = RicercaSentinella(vettore, numero);

    if (r == -1)
    {
        printf("Il numero da te cercato all'interno del vettore non esiste");
        printf("\n");
    }
    else
    {
        printf("Il numero %d e presente all'interno del vettore", numero);
        printf("\n");
    }

    void stampa_array(int v[]);

    return 0;
}


int RicercaSentinella(int v[], int num)
{
    int i = 0;

    while (num != v[N])
    {
        i++;
    }

    if (i = num)
    {
        return -1;
    }
    else
    {
        return i;
    }
    
    
}


void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("I numeri inseriti casualmente sono: %d", v[i]);
        printf("\n");
    }
    
}


