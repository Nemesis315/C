#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void ordina(int v[]);


void stampa_array(int v[]);


int main()
{
    int vettore[N];

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        vettore[i] = rand() % 11;
    }

    ordina(vettore);

    stampa_array(vettore);


    return 0;
}


void ordina(int v[])
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


void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("I numeri inseriti casualmente sono: %d", v[i]);
        printf("\n");
    }
    
}