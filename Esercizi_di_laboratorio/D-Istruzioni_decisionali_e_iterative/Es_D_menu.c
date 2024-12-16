/*
Auore: Matteo Conte
Classe: 3H
Data:16/12/2024

Esercizio: scrivere un programma C che utilizzi un ciclo do-while per visualizzare un menu e chiedere all'utente di inserire una voce del menu fino a quando non sceglie 0=uscita. 
           In caso di uscita prima di terminare il ciclo del menu visualizzare un saluto
           Stampare a schermo la scelta effettuata dall’utente.

Input: serie di numeri interi
Elaborazione: somma dei numeri inseriti 
Output: stampo a schermo la somma dei numeri
*/

#include<stdio.h>
#include<stdlib.h>

#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define UNDERLINE   "\033[4m"
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"

#define BACK_BLACK  "\033[40m"
#define BACK_RED    "\033[41m"
#define BACK_GREEN  "\033[42m"
#define BACK_YELLOW "\033[43m"
#define BACK_BLUE   "\033[44m"
#define BACK_MAGENTA "\033[45m"
#define BACK_CYAN   "\033[46m"
#define BACK_WHITE  "\033[47m"

#define CLEAR_SCREEN "\033[2J"

int main()
{
    // Cancella lo schermo
    printf(CLEAR_SCREEN);

    // Test dei colori del testo
    printf(RED "Questo è un testo rosso!\n" RESET);
    printf(GREEN "Questo è un testo verde!\n" RESET);
}