#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10


int Ricerca(int v[], int num);

int main()
{
    int vettore[N];
    int numero;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        vettore[i] = rand() % 21;
    }
    
    printf("Inserire il numero da cercare all'interno del vettore (compreso da 1-20): ");
    
    scanf("%d", &numero);



    int r = Ricerca (vettore,numero);

    if (r == -1)
    {
        printf("Il numero da te cercato all'interno del vettore non esiste");
        printf("\n");
    }
    else
    {
        printf("Il numero %d e presente all'interno del vettore", numero);
        printf("\n");
    }
    
}



int Ricerca(int v[], int num)
{
    for (int i = 0; i < N; i++)
    {
        if (v[i] == num)
        {
            return i;
        }
        
    }

    return -1;
    
}