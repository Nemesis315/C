#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 15

int main()
{
    int Vettore[N];
    int Numero_da_trovare;
    int trovato = 0;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        Vettore[i] = rand() % 21;
    }

    printf("Inserire il numero da cercare all'interno dell'arrey (Compreso tra 1 e 20): ");
    scanf("%d", &Numero_da_trovare);

    
    
}