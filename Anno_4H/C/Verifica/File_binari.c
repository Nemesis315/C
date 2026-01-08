#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define N 60

void scriviFile (char nomefile[], int k);

void leggiFile (char nomefile[], char a);

typedef struct
{
    char cognome[N];
    int giorno;
    int mese;
    int anno;
    int voti[8];
} studente;


int main()
{
    int x; char c;

    srand(time(NULL));

    char nomeFile[N] = "prova.dat";

    printf("Inserisci quanti record vuoi scrivere nel file:\n");
    scanf("%d", &x);

    scriviFile(nomeFile, x);

    printf("Inserisci la lettera iniziale del cognome da cercare:\n");

    scanf(" %c", &c);

    leggiFile(nomeFile, c);

    return 0;
}



void scriviFile (char nomefile[], int k)
{
    FILE *Fp;

    studente buffer;

    int t = 3;

    Fp = fopen(nomefile, "wb");

    for (int i = 0; i <= k; i++)
    {
        printf("Inserire il proprio cognome:\n");
        scanf("%s", buffer.cognome);

        printf("Inserire il giorno di nascita:\n");
        scanf("%d", &buffer.giorno);

        printf("Inserire l'anno di nascita:\n");
        scanf("%d", &buffer.anno);

        buffer.mese = t;

        for (int j = 0; j < 8; j++)
        {
            buffer.voti[j] = rand() % 10 + 1;
        }

        fwrite(&buffer, sizeof(studente), 1 , Fp);
    }
    
    fclose(Fp);
}

void leggiFile (char nomefile[], char a)
{
    FILE *Fp;

    studente buffer;

    Fp = fopen(nomefile, "rb");

    while (!feof(Fp))
    {
       fread(&buffer, sizeof(studente), 1, Fp);

       if (buffer.cognome[0] == a)
       {
            printf("Cognome: %s\n", buffer.cognome);
            printf("Data di nascita: %d/%d/%d\n", buffer.giorno, buffer.mese, buffer.anno);
            printf("Voti: ");
            for (int j = 0; j < 8; j++)
            {
                printf("%d ", buffer.voti[j]);
            }
            printf("\n");
       }
       
    }

    fclose(Fp);
}