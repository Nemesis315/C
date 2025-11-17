#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void ordina(int v[]);


void stampa_array(int v[]);

int ricerca_bin(int v[], int first, int last, int el);


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

    int r, el;

    printf("Inserire l'elemento da cercare (0-10): ");
    scanf("%d", &el);

    r = ricerca_bin(vettore, 0, N-1, el);

    if (r == -1)
    {
        printf("L'elemento da lei cercato non è presente all'interno del vettore");
        printf("\n");

    }
    else
    {
        printf("L'elemento da lei cercato e %d", r);
        printf("\n");
    }

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

int ricerca_bin(int v[], int first, int last, int el)
{
    int med;

    if (first > last)
    {
        return -1;
    }
    else
    {
        med = (first + last)/2;

        if (el = v[med])
        {
            return med;
        }
        else
        {
            if (el > v[med])
            {
                return ricerca_bin(v, med+1, last, el);
            }
            else
            {
                return ricerca_bin(v, first, med - 1, el);
            }
            
            
        }
        
        
    }
    
    
}