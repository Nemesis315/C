#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 5

void carica_random (int m[][C]);

void stampa_matrice (int m[][C]);

int N_primo (int x);

int conta_Nprimi(int m[][C]);

int main()
{
    int Matrice[R][C];

    int N_primi = 0;

    carica_random(Matrice);

    stampa_matrice(Matrice);

    N_primi = conta_Nprimi(Matrice);

    printf("I numeri primi all'interno della matrice sono: %d", N_primi);

    printf("\n");


    
    return 0;
}

void carica_random (int m[][C])
{
    int i,j;

    srand(time(NULL));

    for ( i = 0; i < R; i++)
    {
        for ( j = 0; j < C; j++)
        {
            m[i][j] = rand () % 16 + 10;           
        }
        
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

int N_primo (int x)
{
    int cont=0;

    for (int i = 2; i < x; i++)
    {
        if ( x % i == 0)
        {
            cont++;
        }
    }
    
    if (cont == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int conta_Nprimi(int m[][C])
{
    int cont = 0;

    int r = 0;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cont = N_primo (m[i][j]);

            if (cont == 1)
            {
                r++;
            }
        }
    }

    return r;
}