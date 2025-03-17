/**
 * @brief Funzione principale che gestisce la ricerca di un numero in un array.
 * 
 * 
 * Questo programma genera un array di 15 numeri casuali tra 0 e 20, poi chiede all'utente di inserire un numero
 * da cercare nell'array. Se il numero è trovato, stampa la sua posizione, altrimenti un messaggio appropriato.
 * 
 * @author Matteo Conte
 * @date 11/03/2025
 * 
 * @version 1.0 11/03/2025 Scrittura del codice e collaudo del programma
 */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Ricerca(int v[], int num); //Funzione per la ricerca del numero chiesto dall'utente

void stampa_array(int v[]); //Funzione per prova dell'effetiva posizione dell'numero chiesto dall'utente

#define N 15 //Costante che indica il numero divaribili contenute nell'arrey

int main()
{
    int Vettore[N]; //Dichiaro un Vettore
    int Numero_da_trovare; //Dichiato una variabile di tipo intero che conterra il numero che sarà inserito dall'utente
    int trovato; //Dichiaro una variabile di tipo intero che indichera la posizione del numero richiesto dall'utente

    srand(time(NULL)); //Imposto il la generazione di numeri casuali.

    // Dichiarare e inizializzare l'array con numeri casuali tra 0 e 20
    for (int i = 0; i < N; i++)
    {
        Vettore[i] = rand() % 21; //Assegna a ciascun elemento un numero casuale tra 0 e 20
    }



    printf("Inserire il numero da cercare all'interno dell'arrey (Compreso tra 1 e 20): "); //Chiedo all'utente di inserire il numero che vuole trovare
    scanf("%d", &Numero_da_trovare);

    //Chiamo la funzione Ricerca
    trovato = Ricerca(Vettore, Numero_da_trovare);


    //Controllo se il numero chiesto dall'utente e presente all'interno dell'array oppure se nn e presente
    if(trovato == -1)
    {
        printf("Il numero %d da lei cercato non e presente all'interno dell'arrey", Numero_da_trovare);
        printf("\n");
    }
    else
    {
        printf("Il numero cercato si trova nella casella di incide %d", trovato);
        printf("\n");
    }


    //Chiamo la funzione stampa_array e stampo a schermo il contenuto dell'array
    stampa_array(Vettore);

    

    return 0; //Termino il programma
}


int Ricerca(int v[], int num)
{
    for (int i = 0; i < N; i++)
    {
        if (v[i] == num)
        {
            i++;
            return i;
        }
        
    }

    return -1;
    
}

void stampa_array(int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d", v[i]);
        printf("\n");
    }
    
}

 