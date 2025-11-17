#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 10
#define C 10

void randMat(int m[][C]);

void stampaMat(int m[][C]);

int contaPari(int m[][C]);

int MediaRigaMat(int m[][C], int righa);

int  main()
{
    int Matrice[R][C]; int righa = 0; int cont = 0; float Media = 0; int cont1 = 0;

    randMat(Matrice);

    stampaMat(Matrice);

    cont = contaPari(Matrice);

    for (int i = 0; i < R; i++)
    {
        Media = MediaRigaMat(Matrice, righa);
        cont1++;
        righa++;

        printf("La media della righa %d è %.1f",cont1,Media);
        printf("\n");
    }

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

void randMat(int m[][C])
{
    srand(time(NULL));

    int i = 0; int j = 0;

    for ( i = 0; i < R; i++)
    {
        for ( j = 0; j < C; j++)
        {
            m[i][j] = rand() % 90 + 10;
        }
        
    }
    
}

int contaPari(int m[][C])
{
    int i = 0; int j = 0; int cont = 0;

    for ( i = 0; i < R; i++)
    {
        for ( j = 0; j < C; j++)
        {
            if (m[i][j] % 2 == 0)
            {
                cont++;
            }
        } 
    } 
}

int MediaRigaMat(int m[][C], int righa)
{
    int j = 0; int somma = 0; int Media = 0;

    for ( j = 0; j < C; j++)
    {
        somma+=m[righa][j];
    }

    Media = somma/R;

    return Media;
}