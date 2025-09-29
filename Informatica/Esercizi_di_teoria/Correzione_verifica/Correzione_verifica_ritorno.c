#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 10
#define C 10

void casualiVet (int vet[], int x, int y);

void casualiMat (int mat[][C]);

void stampaMatrice(int mat[][C]);

int main()
{
    srand(time(NULL));

    int Matrice[R][C];

    casualiMat(Matrice);

    stampaMatrice(Matrice);

}

void casualiVet (int vet[], int x, int y)
{
    int i;

    int t = y - x;

    for ( i = 0; i < R; i++)
    {
        vet[i] = rand() % t + x;
    }
}

void casualiMat (int mat[][C])
{
    int i;

    for ( i = 0; i < R; i++)
    {
        casualiVet( mat[i], 20, 57);
    }
    
}

void stampaMatrice(int mat[][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf(" %d \t", mat[i][j]);
        }
        
        printf("\n");
    }
    
}