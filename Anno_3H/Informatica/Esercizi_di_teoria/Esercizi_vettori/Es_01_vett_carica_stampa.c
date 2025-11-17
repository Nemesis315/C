#include <stdio.h>

#define N 10

void carica_array (int v[]);

void stampa_array (int v[]);


int main()
{
    int voti [N];
    
    carica_array(voti);

    stampa_array(voti);

    return 0;
}

void carica_array (int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("Inserire un voto: ");

        scanf("%d", &v[i]);
    }
    
}

void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("I voti che hai inserito sono: %d", v[i]);
        printf("\n");
    }
    
}