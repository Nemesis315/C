/**
 * @file es_battaglia_navale_step2.c
 * @brief Battaglia Navale - Step 2: Posizionamento casuale della nave sul campo
 * @author Matteo Conte
 * @version 3.2 07/04/25 Versione iniziale
 * 
 * @details
 * OBIETTIVO DELL'ESERCIZIO:
 * Arricchire il programma del Step 1 con la funzionalità di posizionamento casuale
 * di una nave di lunghezza predefinita sul campo di gioco.
 * 
 * ANALISI DEI REQUISITI:
 * 1. Utilizzare un generatore di numeri casuali per posizionare la nave
 * 2. La nave deve avere una lunghezza di 3 caselle (definita come costante)
 * 3. Implementare due modalità di posizionamento: orizzontale e verticale
 * 4. Garantire che la nave sia sempre completamente all'interno del campo
 * 5. Visualizzare il campo con la possibilità di mostrare o nascondere la nave
 * 6. La nave è rappresentata dal carattere '#' nella matrice
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSIONE 10
#define LUNGHEZZA_NAVE 3

/* Prototipi delle funzioni */
/**
 * @brief Funzione per inizializzare il campo con acqua
 * 
 * @param campo La matrice da inizializzare
 */
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);

/**
 * @brief Funzione per posizionare casualmente una nave sul campo
 * 
 * @param campo La matrice dove posizionare la nave
 */
void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]);

/**
 * @brief Funzione per visualizzare il campo
 * 
 * @param campo La matrice da visualizzare
 * @param mostraNave Flag che indica se mostrare o nascondere la nave (1=mostra, 0=nascondi)
 */
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE], int mostraNave);

/**
 * @brief Funzione per gestire uno sparo
 * 
 * @param campo La matrice del campo di gioco
 * @param riga La riga dove sparare
 * @param colonna La colonna dove sparare
 * @return int 1 se il colpo è andato a segno, 0 se è acqua, -1 se le coordinate non sono valide
 */
int spara(char campo[DIMENSIONE][DIMENSIONE], int riga, int colonna);

/**
 * @brief Funzione principale
 * 
 * @return int Codice di uscita del programma
 */
int main() 
{
    // Implementare il main

    int i;

    char campo[DIMENSIONE][DIMENSIONE];

    inizializzaCampo(campo);

    printf("Inserire 1 per visualizzare la nave/0 per non visualizzarla");
    scanf("%d", &i);

    visualizzaCampo(campo,i);

    posizionaNave(campo);

    printf("\n");
    printf("\n");
    printf("\n");

    visualizzaCampo(campo,i);

}

/* Implementazione delle funzioni */
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]) 
{
    // Implementare la funzione per inizializzare il campo
    
    for (int i = 0; i < DIMENSIONE; i++)
    {
        for (int j = 0; j < DIMENSIONE; j++)
        {
            campo[i][j] = '~';
        }
        
    }
    
}

void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]) 
{
    // Implementare la funzione per posizionare la nave casualmente

    int posizione; //se il numero random e 1 la nave e orizontale, se e 0 è verticale
    int riga;
    int colonna;

    srand(time(NULL));

    posizione = rand() % 2;

    riga = rand() % (DIMENSIONE - LUNGHEZZA_NAVE);
    

    if (posizione == 1)
    {
        colonna = rand() % (DIMENSIONE - LUNGHEZZA_NAVE);

        for (int i = 0; i < LUNGHEZZA_NAVE; i++)
        {
            campo[riga][colonna] = '#';
            colonna++;
        }
        
    }
    else
    {
        riga = rand() % (DIMENSIONE - LUNGHEZZA_NAVE);

        for (int j = 0; j < LUNGHEZZA_NAVE; j++)
        {
            campo[riga][colonna] = '#';
            riga++;
        }
        
    }
    
}

void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE], int mostraNave) 
{
    // Implementare la funzione per visualizzare il campo
    
    for (int i = 0; i < DIMENSIONE; i++)
    {
        for (int j = 0; j < DIMENSIONE; j++)
        {
            if (mostraNave == 1)
            {
                printf("%c \t ", campo[i][j]);
            }
            else
            {
                if (campo[i][j] == '#')
                {
                    campo[i][j] = '~';
                }
                
            }
            
        }
        printf("\n");
    }
    
}

int spara(char campo[DIMENSIONE][DIMENSIONE], int riga, int colonna) 
{
    // Implementare la funzione per gestire uno sparo
    
    if (riga < DIMENSIONE && colonna < DIMENSIONE)
    {
        return -1;
    }
    else
    {
        
        if (campo[riga][colonna] == '#')
        {
            campo[riga][colonna] = 'X';

            printf("Brava hai colpito la nave");

            return 1;
        }
        else
        {
            campo[riga][colonna] = 'O';
            
            printf("Ritenta sarai più fortunato");

            return 0;
        }

    }
    
    printf("Le coordinate non coincidono con la grandezza del campo di gioco");
}