#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define V 5

struct data
{
    int gg;
    int mm;
    int aa;
} typedef data;

struct studente
{
    char cognome[20];
    data nascita;
    int voti[V];
} typedef studente;

void carica_record(studente*);
void carica_tabella(studente[]);
void stampa_record(studente);
void stampa_tabella(studente[]);
void carica_tabella2(studente[]);
void stampaTabella2(studente[]);
float ricerca_e_media(studente[], char[]);

int main()
{
    srand(time(NULL));
    studente st[N];
    char cerca[20];
    float m;

    carica_tabella2(st);

    printf("\n--- Stampa con stampaTabella2 ---\n");
    stampaTabella2(st);

    printf("\nInserisci cognome da cercare: ");
    scanf("%s", cerca);
    m = ricerca_e_media(st, cerca);

    if (m == -1)
        printf("Cognome non trovato.\n");
    else
        printf("Media voti di %s = %.2f\n", cerca, m);

    return 0;
}

void carica_record(studente* s)
{
    int i;
    printf("Inserisci cognome : ");
    scanf("%s", s->cognome);
    printf("Inserisci giorno,mese,anno di nascita :  ");
    scanf("%d%d%d", &s->nascita.gg, &s->nascita.mm, &s->nascita.aa);
    for (i = 0; i < V; i++)
    {
        s->voti[i] = rand() % 10 + 1;
    }
}

void stampa_record(studente s)
{
    int i;
    printf("%s\n", s.cognome);
    printf("nascita : %d/%d/%d\n", s.nascita.gg, s.nascita.mm, s.nascita.aa);
    for (i = 0; i < V; i++)
    {
        printf("%5d", s.voti[i]);
    }
    printf("\n");
}

void carica_tabella(studente tab[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        carica_record(&tab[i]);
    }
}

void stampa_tabella(studente tab[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        stampa_record(tab[i]);
    }
}

void carica_tabella2(studente tab[])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        printf("Inserisci cognome : ");
        scanf("%s", tab[i].cognome);
        printf("Inserisci giorno,mese,anno di nascita :  ");
        scanf("%d%d%d", &tab[i].nascita.gg, &tab[i].nascita.mm, &tab[i].nascita.aa);
        for (j = 0; j < V; j++)
        {
            tab[i].voti[j] = rand() % 10 + 1;
        }
    }
}

// Nuova funzione: stampa la tabella senza richiamare stampa_record
void stampaTabella2(studente tab[])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        printf("Cognome: %s\n", tab[i].cognome);
        printf("Data di nascita: %02d/%02d/%04d\n", tab[i].nascita.gg, tab[i].nascita.mm, tab[i].nascita.aa);
        printf("Voti: ");
        for (j = 0; j < V; j++)
        {
            printf("%d ", tab[i].voti[j]);
        }
        printf("\n\n");
    }
}

// Nuova funzione: ricerca un cognome e calcola la media dei voti
float ricerca_e_media(studente tab[], char cognome[])
{
    int i, j;
    float somma, media;

    for (i = 0; i < N; i++)
    {
        if (strcmp(tab[i].cognome, cognome) == 0)
        {
            somma = 0;
            for (j = 0; j < V; j++)
            {
                somma += tab[i].voti[j];
            }
            media = somma / V;
            return media;
        }
    }
    return -1;
}
