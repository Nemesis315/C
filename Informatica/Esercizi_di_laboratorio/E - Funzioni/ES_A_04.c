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
int menu (void);

int main()
{
    int scelta;
    int base,altezza,Area;
    int num;
    int n1,n2;
    int RisMCD;
    do
    {
        scelta= menu();
        switch (scelta)
        {
        case 0:
            printf("Arrivederci e buona giornata");
            printf("\n");
            break;

        case 1:
            
            printf("Inserire un numero intero che sara la base del rettangolo: ");
            scanf("%d", &base);
            printf("\n");

            printf("Inserire un numero intero che sara l'altezza del rettangolo: ");
            scanf("%d",&altezza);
            printf("\n");

            Area=area_rettangolo(base,altezza);

            printf("L'area del rettangolo con base %d e altezza %d vale: %d", base,altezza,Area);
            printf("\n");
            printf("\n");
            printf("\n");

            break;

        case 2:
            

            printf("Inserire un numero per sapere la somma dei suoi divisori: ");
            scanf("%d", &num);
            printf("\n");

            Dnum(num);


            break;

        case 3:

            printf("Inserire 2 numeri interi per sapere il loro MCD: \n");
            scanf("%d %d",&n1,&n2);
            printf("\n");

            RisMCD=MCD(n1,n2);

            printf("L'MCD tra %d e %d vale: %d", n1,n2,RisMCD);
            printf("\n");
            printf("\n");
            printf("\n");



        
        default:

            printf("Hai sbagliato a inserire il numero tra quelli richiesti reinseriscilo");
            printf("\n");
            printf("\n");
            printf("\n");
            break;
        }

    } while (scelta != 0);
    
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
    printf("\n");
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

int menu(void)
{
    int scelta;

    printf("Digita 0 per uscire dal menu");
    printf("\n");
    printf("Digita 1 per calcolare l'area del triangolo");
    printf("\n");
    printf("Digita 2 per calcolare la somma dei divisori di un numero");
    printf("\n");
    printf("Digita 3 per calcolare l'MCD di 2 numeri");
    printf("\n");


    scanf("%d", &scelta);

    return scelta;
}