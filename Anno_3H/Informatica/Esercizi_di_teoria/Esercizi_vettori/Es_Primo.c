#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20


int N_Primo( int x);

int Conta_Primi( int v[] );

void stampa_array(int v[]);


int main()
{
    int Vettore[ N ];

    int Risultato;


    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        Vettore[i] = rand() % 21;
    }

    Risultato = Conta_Primi(Vettore);

    printf("All'interno del vettore sono presenti %d numeri primi", Risultato);
    printf("\n");

    stampa_array(Vettore);
    
    return 0;
}

int N_Primo( int x)
{
    int cont = 0;

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            cont ++;
        }
        
    }
    if (cont == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}


int Conta_Primi( int v[] )
{
    int Cont=0, r = 0;

    for (int i = 0; i < N; i++)
    {
        Cont = N_Primo(v[i]);
        
        if (Cont == 1)
        {
            r++;
        }
        
    }
    
    return r;
}


void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d", v[i]);
        printf("\n");
    }
    
}