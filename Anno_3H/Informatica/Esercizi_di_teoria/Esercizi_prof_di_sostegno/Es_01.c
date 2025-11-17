#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void stampa_array(int v[]);

int somma_vettore(int v[]);

float media_array(int v[]);

int Max_array(int v[]);

#define N 10

int main()
{
    int Vettore[N];
    int Somma;
    int Max;
    float Media;


    srand(time(NULL));


    for (int i = 0; i < N; i++)
    {
        Vettore[i] = rand() % 21;
    }

    Somma = somma_vettore(Vettore);

    printf("La somma dei valori all'interno dell'arrey e: %d", Somma);
    printf("\n");

    Media = media_array(Vettore);

    printf("La media dei valori all'interno del vettore e: %.1f ", Media);
    printf("\n");

    Max = Max_array(Vettore);

    printf("Il valore massimo all'interno del vettore e: %d", Max);
    printf("\n");



    stampa_array(Vettore);
}




void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("I voti che hai inserito sono: %d", v[i]);
        printf("\n");
    }
    
}


int somma_vettore(int v[])
{
    int Somma = 0;

    for (int i = 0; i < N; i++)
    {
        Somma += v[i];
    }
    
    return Somma;
}


float media_array(int v[])
{
    int somma = 0;
    float media;

    for (int i = 0; i < N; i++)
    {
        somma += v[i];
    }

    media = (float)somma / N;

    return media;
    
}


int Max_array(int v[])
{
    int x = 0;

    for (int i = 1; i < N; i++) {
        if (v[i] > x) {
            x = v[i];
        }
    }
    return x;
}


