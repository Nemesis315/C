/**
 * @brief Dichiari un array di 10 interi (1-10)
 *
 * @param vettore1
 * @param costante N
 * @return il massimo comune divisore tra a e b
 */
#include <stdio.h>

#define N 10




int main()
{
    //dichiaro un vettore di 10 interi e gli assegno i numeri da 1 a 10
    int vettore1[N] = {1,2,3,4,5,6,7,8,9,10};

    //creo un ciclo for
    for (int i = 0; i < N; i++)
    {
        //stamo a schermo tutti i valori all'interno del vettore
        printf("I numeri sono: %d", vettore1[i]);
        
        //vado a capo
        printf("\n");
    }
    
    //termino il programma
    return 0;
}




