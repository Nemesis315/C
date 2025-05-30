


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define R 5
#define C 5

void caricaMat(int m[][C]);

void stampaMat(int m[][C]);

// 1. Creare matrice (5 x 5)
// 2. Funzioni di stampa e carica
// 3. Visualizzare la matrice
// 4. Comtare numeri dispari
int main()
{
    int Matrice[R][C];

    caricaMat(Matrice);

    stampaMat(Matrice);


    return 0;
}

void stampaMat(int m[][C])
{
    int i = 0; int j = 0;

    for ( i = 0; i < R; i++)
    {
        for ( j = 0; j < C; j++)
        {
            printf("%d \t", m[i][j]);
        }

        printf("\n");
        
    }
    
}

void caricaMat(int m[][C])
{
    srand(time(NULL));

    int i = 0; int j = 0;

    for ( i = 0; i < R; i++)
    {
        for ( j = 0; j < C; j++)
        {
            m[i][j] = rand() % 11;
        }
        
    }
    
}