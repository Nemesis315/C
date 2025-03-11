#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Ricerca(int v[], int num);

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


    int trovato = Ricerca(Vettore, Numero_da_trovare);

    if(trovato == -1)
    {
        printf("Il numero %d da lei cercato non e presente all'interno dell'arrey", Numero_da_trovare);
    }
    else
    {
        printf("Il numero cercato si trova nella casella di incide %d", trovato);
    }

    return 0;
}


int Ricerca(int v[], int num)
{
    for (int i = 0; i < N; i++)
    {
        if (v[i] == num)
        {
            return num;
        }
        
    }

    return -1;
    
}

 