#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 3   // Numero di righe
#define C 4   // Numero di colonne

// 1) Restituisce 1 se x è divisore di y, 0 altrimenti
int divisore(int x, int y);

// 2) Riempie un vettore con numeri random tra x e y (inclusi)
void carica_random(int v[]);

// 3) Riempie una matrice usando carica_random per ogni riga
void carica_matrice(int m[R][C]);

// 5) Stampa la matrice (non usa stampa_vettore)
void stampa_matrice(int m[R][C]);

// 6) Conta quanti elementi della colonna k sono divisori di n
int conta_divisori(int m[R][C], int k, int n);

int main() 
{
    srand(time(NULL));

    int Matrice[R][C];

    carica_matrice(Matrice);
    stampa_matrice(Matrice);

    return 0;
}

int divisore(int x, int y)
{
    if (x == 0) return 0;
    return (y % x == 0) ? 1 : 0;
}

void carica_random(int v[])
{
    for (int i = 0; i < C; i++) 
    {
        v[i] = rand() % 16 + 10;
    }
}

void carica_matrice(int m[R][C]) 
{
    for (int i = 0; i < R; i++) 
    {
        carica_random(m[i]); 
    }
}

void stampa_matrice(int m[R][C]) 
{
    for (int i = 0; i < R; i++) 
    {
        for (int j = 0; j < C; j++) 
        {
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
}

int conta_divisori(int m[R][C], int k, int n) 
{
    int count = 0;
    
    for (int i = 0; i < R; i++) 
    {
        if (divisore(m[i][k], n)) 
        {
            count++;
        }
    }
    return count;
}