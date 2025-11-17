#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int conta(int v[], int num);

void stampa_array(int v[]);

int main()
{
    int Vettore[N];

    int numero;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        Vettore[i] = rand() % 21;
    }

    printf("Inserire il numero da cercare all'interno del vettore (compreso da 1-20): ");
    scanf("%d", &numero);


    int r = conta(Vettore, numero);

    printf("Il numero da te cercato e presente %d volte all'interno dell'arrey", r);
    printf("\n");


    stampa_array(Vettore);


    return 0;
}

int conta(int v[], int num)
{
    int cont = 0;

    for (int i = 0; i < N; i++)
    {
        if (v[i] == num)
        {
            cont++;
        }
        
    }

    return cont;
    
}

void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("I numeri inseriti casualmente sono: %d", v[i]);
        printf("\n");
    }
    
}
