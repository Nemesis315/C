/*
*Auore: Matteo Conte
*Classe: 3H
*Data:27/01/2025
*
*Esercizio: Scrivere una funzione chiamata "somma_divisori" che prende in input un numero intero e restituisce la somma dei suoi divisori.
*
*Intput: 1 numero intero
*Elaborazione: la funzione "Dnum" calcolera i divisori del numero inserito e ne fara la somma.
*Output: stampo a schermo la somma dei divisori
*/



#include<stdio.h>

int Dnum(int x); //Dmun = Divisori di un numero

int main()
{
    int Num,Ris;    //Dichiaro 2 variabili Num e Ris
    printf("Inserire un numero intero positivo: ");     //Chiedo all'utente di inserire un numero intero positivo
    scanf("%d", &Num);      //Leggo il numero letto dell'utente
    printf("\n");

    Ris=Dnum(Num);      //Chiamo la funzione Dnum

    printf("la somma dei divisori e: ", Ris);       //Stampo a schermo la somma di tutti i divisori del numero

    return 0;       //termino il programma     

}

int Dnum(int x)     
{
    int cont,Somma,Ris;     //Dichiaro 3 parametri attuali 

    for (cont = 1; cont <= x; cont++) 
    {
        if (x % cont == 0) 
        {
            Ris=Somma+=cont;        
        }
    }
    return Ris;     //restituisco Ris
}