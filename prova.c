#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define N 20

void scriviFile(char nomeFile[], int k);

void leggiFile(char nomeFile[]);

void correggi(char nomeFile[], char cognomeV[], char cognomeN[]);


struct
{
    char cognome[N];

    int voti[8];

} typedef studente;


int main()
{
    srand(time(NULL));

    char nomeFile[N] = {"conte.dat"};

    scriviFile(nomeFile, 5);

    leggiFile(nomeFile);

    correggi(nomeFile, "poli", "conteuuuu");

    leggiFile(nomeFile);

    return 0;
}

void scriviFile(char nomeFile[], int k)
{
    int err;

    studente buffer;//studente è il tipo

    FILE *Fp;//Fp=puntatore al file

    Fp = fopen(nomeFile, "ab");

    for(int i = 0; i < k; i++)
    {
        printf("Inserire un cognome da leggere: ");

        scanf("%s",  buffer.cognome);

        for(int j = 0; j < 8 ; j++)
        {

            buffer.voti[j] = rand() % 10 +1;

        }

        fwrite(&buffer, sizeof(studente), 1 , Fp);
    }

    fclose(Fp);
}


void leggiFile(char nomeFile[])
{
    studente buffer;

    int n;

    FILE *Fp;

    Fp = fopen(nomeFile, "rb");

    while(! feof(Fp)) //finchè non è finito;sempre il while
    {
        n = fread(&buffer, sizeof(studente), 1, Fp);

        if(n>0)
        {
            printf("%20s \t", buffer.cognome); //fseak serve per salire di un record, o su uno preciso

            for(int i = 0; i < 8; i++)
            {
                printf("%d \t", buffer.voti[i]);
            }
            printf("\n");
        }
    }

    fclose(Fp);
}


void correggi(char nomeFile[], char cognomeV[], char cognomeN[])
{
    int err;

    int flag=0;

    studente buffer;

    int n;

    FILE *Fp;

    Fp = fopen(nomeFile, "rb+");

    while(!flag && !feof(Fp)) //finchè non è finito;sempre il while
    {
        n = fread(&buffer, sizeof(studente), 1, Fp);

        if(n>0)
        {
            if(strcmp(buffer.cognome,cognomeV) == 0)
            {
                err = fseek(Fp, -sizeof(studente), SEEK_CUR);

                strcpy(buffer.cognome, cognomeN);

                fwrite(&buffer, sizeof(studente), 1, Fp);

                flag = 1;
            }
        }
    }

    fclose(Fp);
}