#include <stdio.h>
#include <limits.h>

void carica(int v[], int x);

void NuovoInserisci(int v[], int x);

void stampa_array(int v[]);

#define N 100

#define F 10

int main()
{
    int Vettore[N];
    int Vettore1[F];
    int Vettore2[N];
    int Vettore3[N];

    int num;

    //printf("Inserire un numero maggiore di 0 (intero): ");
    //scanf("%d", &num); 
    
    //carica(Vettore,num);

    //stampa_array(Vettore);

    NuovoInserisci(Vettore1,1);

    stampa_array(Vettore1);
    

    return 0;
}


void carica(int v[], int x)
{
    for (int i = 0; i < N; i++)
    {
        v[i] = x++;
    }
}

void NuovoInserisci(int v[], int x)
{
    v[0] = x;

    for (int i = 1; i < F; i++)
    {
        v[i] = x*=2;
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