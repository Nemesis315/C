#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

void carica_random(int v[]);

void stampa_array(int v[]);

void copia_arrey(int v[], int v2[], int v3[]);

int main()
{
    int Vettore1[N], Vettore2[N], Vettore3[N];

    carica_random(Vettore1);

    stampa_array(Vettore1);

    copia_arrey(Vettore1,Vettore2,Vettore3);

    stampa_array(Vettore2);

    stampa_array(Vettore3);





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

void copia_arrey(int v[], int v2[], int v3[])
{
    int cont = 0;

    int cont1 = 0;

    for (int i = 0; i < N; i++)
    {
        if (v[i] >= 0)
        {
            v[i] = v2[cont];
            cont ++;
        }
        else
        {
            v[i] = v3[cont1];
            cont1 ++;
        }
    
    }
}