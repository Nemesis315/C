#include <stdio.h>

#include <stdio.h>

#define MAX 100

int coda[MAX];
int testa = 0;         // posizione del primo elemento
int fine = -1;         // posizione dell’ultimo elemento
int quanti = 0;        // numero di elementi nella coda

int vuota() 
{
    return quanti == 0;
}

int piena() 
{
    return quanti == MAX;
}

int inserisci(int valore) 
{
    if (piena()) 
    {
        printf("Coda piena!\n");
        return 0;
    }

    fine = (fine + 1) % MAX;
    coda[fine] = valore;
    quanti++;
    return 1;
}

int estrai(int *valore) 
{
    if (vuota()) 
    {
        printf("Coda vuota!\n");
        return 0;
    }

    *valore = coda[testa];
    testa = (testa + 1) % MAX;
    quanti--;
    return 1;
}

int leggiTesta(int *valore) 
{
    if (vuota()) 
    {
        return 0;
    }
    *valore = coda[testa];
    return 1;
}

int main() 
{
    inserisci(10);
    inserisci(20);
    inserisci(30);

    int x;

    if (estrai(&x))
    {
        printf("Estratto: %d\n", x);
    }

    if (leggiTesta(&x))
    {
        printf("Testa della coda: %d\n", x);
    }
    
    return 0;
}