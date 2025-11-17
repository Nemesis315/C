/*
Auore: Matteo Conte
Classe: 3H
Data:11/12/2024

Esercizio: Scrivere un programma C che letti 10 interi da tastiera li visualizzi tutti (nel ciclo) e stampi la loro somma (fuori dal ciclo).

Input: serie di numeri interi
Elaborazione: somma dei numeri inseriti 
Output: stampo a schermo la somma dei numeri
*/

#include<stdio.h>

int main()
{
    int N,somma,cont; //dichiaro le variabili
    
    somma=cont=0; //assegno somma e cont a 0

    printf("Inseire 10 numeri numeri interi: "); //chiedo all'utente di inserire una serie di numeri interi
    
    for (cont = 0; cont <10 ; cont++) //uso un ciclo for che si incrementa di 1 fino a 10
    {
        scanf("%d", &N); //leggo i numeri inseriti dall'utente
        somma=somma+N; //Sommo alla tutti i numeri inseriti dall'utente
    }
    
    printf("La somma totale dei numeri inseriti e: %d", somma); //stampo a schermo il valore finale della somma
    printf("\n");

    return 0; //termino il programma
}