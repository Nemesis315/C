#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5 //R = Righe
#define C 5 //C = Colonne

void stampa_matrice(int M[][C], int r, int c);


int main()
{
    int Matrice[R][C];


    srand(time(NULL));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            Matrice[i][j] = rand() % 11;
        }
        
    }
    


    stampa_matrice(Matrice,R,C);


    return 0;
}


void stampa_matrice(int m[][C], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
}
