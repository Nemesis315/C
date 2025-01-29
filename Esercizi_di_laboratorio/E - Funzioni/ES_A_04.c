/*
Auore: Matteo Conte
Classe: 3H
Data:20/01/2025

Esercizio: Scrivere la funzione “void menu()” che visualizzi un menù e che chieda all’utente un numero corrispondente alla funzione da eseguire, 0 per uscire.
Aggiungere alla funzione menu le chiamate alle tre precedenti funzioni per testarle. Chiedere all'utente di inserire i valori necessari per ogni funzione e stampare il risultato ottenuto.

*/

#include<stdio.h>

int area_rettangolo (int base,int altezza);
void Dnum(int x);
int MCD (int x ,int y);
void menu();

int main()
{

}
void Dnum(int x)     
{
    int cont,Somma = 0,Ris;     //Dichiaro 3 parametri attuali 

    for (cont = 1; cont <= x; cont++) 
    {
        if (x % cont == 0) 
        {
            Ris=Somma+=cont;        
        }
    }
    
    printf("La somma dei divisori e: %d", Ris);
    printf("\n");
}
int MCD (int x, int y)  
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y -x;
        }
    }
    
    return x;
}
int area_rettangolo (int base,int altezza)      
{
    int area;       //dichiaro una variabile area 
    
    area = base * altezza;      //Moltiplico la base per l'altezza 

    return area;        //termino la funzione con il risultato dell'area
}