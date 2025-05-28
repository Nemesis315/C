#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define R 10
#define C 10

void casualMat(int m[][C]);

void stampaMat(int m[][C]);

void dispari(int m[][C], int y);

int pariMat(int m[][C]);

void diagonale(int m[][C]);





int main()
{
    int Matrice[R][C]; int y; int r;

    casualMat(Matrice);

    stampaMat(Matrice);

    //printf("Inserire un numero compreso tra 1 e 10:");
    //printf("\n");
    //scanf("%d",&y);

    //dispari(Matrice,y);

    //stampaMat(Matrice);

    //r = pariMat(Matrice);

    //if (r == 0)
    //{
    //    printf("La matrie nn e pari");
    //    printf("\n");
    //}
    //else
    //{
    //    printf("La matrice e pari");
    //    printf("\n");
    //}




    
    







    return 0;
}

void casualMat(int m[][C])
{
    int i = 0; int j = 0;

    for (i = 0; i < R; i++) 
    {
        for (j = 0; j < C; j++) 
        {
            m[i][j] = (rand() % 16) + 10;
        }
    }
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

void dispari(int m[][C], int y)
{
    int i = 0; int j = 0;

    for ( i = 0; i < R; i++)
    {
        for ( j = 0; j < C; j++)
        {
            if (m[i][j] % 2 == 1)
            {
                m[i][j] == y;
            }
            
        }
    }    
}

int pariMat(int m[][C])
{
    int i = 0; int j = 0;

    for ( i = 0; i < R; i++)
    {
        for ( j = 0; j < C; j++)
        {
            if (m[i][j] % 2 == 1)
            {
                return 0;
            }
            
        }
        
    }

    return 1;
    
}

void diagonale(int m[][C])
{
    
}