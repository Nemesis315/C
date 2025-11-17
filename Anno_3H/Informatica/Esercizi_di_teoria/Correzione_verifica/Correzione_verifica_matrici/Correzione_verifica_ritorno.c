#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 10
#define C 10

void casualiVet (int vet[]);

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

void casualiVet (int vet[])
{
    int i;

    for ( i = 0; i < C; i++)
    {
        vet[i] = rand() % 21 ;
    }
    
}

void casualiMat (int mat[][C])
{
    int i; int x = 20 ; int y = 57;

    for ( i = 0; i < R; i++)
    {
        casualiVet ( mat[i]) ;
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

int conta(int mat[][C], int k, int x)
{
    int cont = 0;

    for (int i = 0; i < R; i++)
    {
        cont+= mat[i][k] % x == 0;
    }
    return cont;
}