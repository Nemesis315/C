#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define N 60

void scriviFile (char nomefile[], int k);

struct 
{
    char cognome[N];

    int giorno;

    int mese;

    int anno;

    int voti[8];

} typedef studente;


int main()
{
    int x;

    srand(time(NULL));

    char nomeFile[N] = { "prova.dat" };

    printf("Inserisci quanti record vuoi scrivere nel file: ");
    scanf("%d", &x);

    scriviFile(nomeFile, x);

    return 0;
}



void scriviFile (char nomefile[], int k)
{
    FILE *Fp;

    studente buffer;

    int t = 3;

    Fp = fopen(nomefile, "wb");

    for (int i = 0; i < k; i++)
    {
        printf("Inserire il proprio cognome: ");
        scanf("%s", buffer.cognome);

        printf("Inserire il giorno di nascita: ");
        scanf("%d", buffer.giorno);

        printf("Inserire l'anno di nascita: ");
        scanf("%d", buffer.anno);

        buffer.mese = t;

        for (int j = 0; j < 8; j++)
        {
            buffer.voti[j] = rand() % 10 + 1;
        }

        

        

        fwrite(&buffer, sizeof(studente), 1 , Fp);
    }
    
    fclose(Fp);
}

