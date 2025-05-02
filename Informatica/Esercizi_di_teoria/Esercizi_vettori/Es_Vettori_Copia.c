#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

void carica_random(int v[]);

void stampa_array(int v[]);

int main()
{
    int Vettore1[N], Vettore2[N], Vettore3[N];

    carica_random(Vettore1);

    stampa_array(Vettore1);




    return 0;
}


void carica_random(int v[])
{
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        v[i] = ((float)rand() / RAND_MAX) * 41 - 21;
    }
}


void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    
}