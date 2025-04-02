/**
 * @file Es_Battaglia_Navale.c
 * @brief Battaglia Navale - Step 1: Inizializzazione e visualizzazione del campo di gioco
 * @author Matteo Conte
 * @version 1.0 01/04/25 Versione iniziale
 * 
 * @details
 * OBIETTIVO DELL'ESERCIZIO:
 * Creare la struttura base del gioco Battaglia Navale, implementando le funzioni
 * necessarie per inizializzare e visualizzare il campo di gioco.
 * 
 * ANALISI DEI REQUISITI:
 * 1. Creare una matrice di dimensione 5x5 per rappresentare il campo di gioco
 * 2. Inizializzare la matrice con il carattere '~' che rappresenta l'acqua
 * 3. Visualizzare il campo di gioco con indici di riga e colonna
 * 4. Utilizzare una struttura modulare con funzioni separate per inizializzazione e visualizzazione
 */
#include <stdio.h>

#define DIMENSIONE 5

/* Prototipi delle funzioni */
/**
 * @brief Funzione per inizializzare il campo con acqua
 * 
 * @param campo La matrice da inizializzare
 */
void inizializzaCampo(char campo[][DIMENSIONE]);

/**
 * @brief Funzione per visualizzare il campo
 * 
 * @param campo La matrice da visualizzare
 */
void visualizzaCampo(char campo[][DIMENSIONE]);

/**
 * @brief Funzione principale
 * 
 * @return int Codice di uscita del programma
 */
int main() 
{
    // Implementare il main

    char campo[DIMENSIONE][DIMENSIONE];

    inizializzaCampo(campo[DIMENSIONE][DIMENSIONE]);


    visualizzaCampo(campo[DIMENSIONE][DIMENSIONE]);


}

/* Implementazione delle funzioni */
void inizializzaCampo(char campo[][DIMENSIONE]) 
{
    // Implementare la funzione per inizializzare il campo

    char carattere;
    printf("Inserire il carattere per l'acqua: ");
    scanf("%c", &carattere);
    

    for (int i = 0; i < DIMENSIONE; i++)
    {
        for (int j = 0; i < DIMENSIONE; j++)
        {
            scanf("%c", campo[i][j]);
        }
        
    }
    


}

void visualizzaCampo(char campo[][DIMENSIONE]) 
{
    // Implementare la funzione per visualizzare il campo

    {
        for (int i = 0; i < DIMENSIONE; i++)
        {
            for (int j = 0; j < DIMENSIONE; j++)
            {
                printf("%c \t", campo[i][j]);
            }
            printf("\n");
        }
    }
}