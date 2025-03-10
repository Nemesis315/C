#include <stdio.h>

#define N 10



int main()
{
    //Dichiaro un vettore di tipo float con una costante N
    float vettore[N];
    float somma;
    float media;


    for (int i = 0; i < N; i++)
    {
        printf("Inserire un numero: ");

        scanf("%f", &vettore[i]);
    }

    //creo un ciclo for
    for (int i = 0; i < N; i++) 
    {
        somma += vettore[i];  
    }
    
    //stamo a schermo il valore della somma
    printf("La somma dei numeri di questo vettore è: %.1f", somma);
    printf("\n");

    media = somma / N;

    printf("La media di questo vettore e %.1f", media);
    printf("\n");

    return 0;
}


