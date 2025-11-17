#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 10
#define C 10

int Divisore (int x, int k);

void carica_random (int v[]);

void carica_matrice (int m[][C]);

void stampa_matrice (int m[][C]);

int main()
{
    int Matrice[R][C];

    carica_matrice(Matrice);

    stampa_matrice(Matrice);

    return 0;
}

int Divisore (int x, int k)
{
    if ( x % k == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void carica_random (int v[])
{
    srand(time(NULL));

    for (int i = 0; i < R; i++)
    {
        v[i] = rand () % 81 + 20;
    }
}

void carica_matrice (int m[][C])
{
    int i;

    for ( i = 0; i < R; i++)
    {
        carica_random ( m[i] );
    }
    
}

void stampa_matrice (int m[][C])
{
    int i;
    int j;

    for ( i = 0; i < R; i++)
    {
        for ( j = 0; j < C; j++)
        {
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
}