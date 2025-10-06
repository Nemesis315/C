#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 10
#define C 10

void casualiVet (int vet[], int x, int y);

void casualiMat (int mat[][C]);

void stampaMatrice(int mat[][C]);

int pariV (int vet[] );

int pariMat( int mat[][C]);

int conta(int mat[][C], int k, int x);

int main()
{
    srand(time(NULL));

    int r; int x; int Div; int j;

    int Matrice[R][C];

    stampaMatrice(Matrice);

    casualiMat(Matrice);

    r = pariMat(Matrice);

    printf("Inserisci un numero tra 1 e 10: ");
    scanf("%d", &Div);

    for ( x = 0; x < C; x++)
    {
        j = conta(Matrice, x ,Div);
    }
    
    printf("%d", j);
    printf("\n");

    return 0;

}

void casualiVet (int vet[], int x, int y)
{
    int i;

    for ( i = 0; i < C; i++)
    {
        vet[i] = rand() % (57 - 20) + 20;
    }
    
}

void casualiMat (int mat[][C])
{
    int i; int x = 20 ; int y = 57;

    for ( i = 0; i < R; i++)
    {
        casualiVet( mat[i], x, y);
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

int pariV (int vet[] )
{
    for (int i = 0; i < C; i++)
    {
        if (vet[i] % 2 == 1)
        {
            return 0;
        }
        
    }
    return 1;
}

int pariMat( int mat[][C])
{
    int cont = 0; int i;

    for ( i = 0; i < R; i++)
    {
        cont+= pariV(mat[i]);
    }
    return cont;
}

int conta(int mat[][C], int k, int x)
{
    int cont = 0;

    for (int i = 0; i < R; i++)
    {
        cont+= mat[i][k] % x == 0;
    }
    return cont;
}