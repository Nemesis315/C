#include <stdio.h>
#define N 30

void scrivi_file(char nome_file[], int k);

void leggi_file(char nome_file[]);

void cerca_matricola(char nome_file[], int matricola);

void aggiungi_studente(char nome_file[]);

struct
{
    char nome[N];
    char cognome[N];
    int matricola;
    float media;
} typedef Studente;


int main()
{
    char nome_file[N] = { "student.dat" };

    int x;
    int scelta = -1;
    int matricola;

    while (scelta != 0)
    {
        printf("\nMenu:\n");
        printf("1. Inserisci studenti (sovrascrive il file)\n");
        printf("2. Visualizza studenti\n");
        printf("3. Cerca studente per matricola\n");
        printf("4. Aggiungi studente\n");
        printf("0. Esci\n");
        printf("Scelta: ");

        if (scanf("%d", &scelta) != 1) {
            while (getchar() != '\n');
            printf("Input non valido.\n");
            scelta = -1;
            continue;
        }

        switch (scelta)
        {
            case 1:
                printf("Quanti studenti vuoi inserire nel file? ");
                if (scanf("%d", &x) == 1)
                    scrivi_file(nome_file, x);
                else {
                    while (getchar() != '\n');
                    printf("Numero non valido.\n");
                }
                break;
            case 2:
                leggi_file(nome_file);
                break;
            case 3:
                printf("Inserisci la matricola da cercare: ");
                if (scanf("%d", &matricola) == 1)
                    cerca_matricola(nome_file, matricola);
                else {
                    while (getchar() != '\n');
                    printf("Matricola non valida.\n");
                }
                break;
            case 4:
                aggiungi_studente(nome_file);
                break;
            case 0:
                printf("Uscita.\n");
                break;
            default:
                printf("Scelta non valida.\n");
        }
    }

    return 0;  

}

void scrivi_file(char nome_file[], int k)
{
    Studente buffer; int i;
    
    FILE *Fp;

    Fp = fopen(nome_file, "wb");

    for (i = 0; i < k; i++)
    {
        printf("Inserisci il nome dello studente: ");
        scanf("%s", buffer.nome);
        printf("Inserisci il cognome dello studente: ");
        scanf("%s", buffer.cognome);
        printf("Inserisci la matricola dello studente: ");
        scanf("%d", &buffer.matricola);
        printf("Inserisci la media dello studente: ");
        scanf("%f", &buffer.media);
        fwrite(&buffer, sizeof(Studente), 1, Fp);
    }

    fclose(Fp);    
}

void leggi_file(char nome_file[])
{
    Studente buffer; int n;
    
    FILE *Fp;

    Fp = fopen(nome_file, "rb");

    while (!feof(Fp))
    {
        n = fread(&buffer, sizeof(Studente), 1, Fp);

        if (n > 0)
        {
            printf("Nome: %s", buffer.nome);
            printf("\n");
            printf("Cognome: %s", buffer.cognome);
            printf("\n");
            printf("Matricola: %d", buffer.matricola);
            printf("\n");
            printf("Media: %.2f", buffer.media);
            printf("\n");
        }
    }

    fclose(Fp);
}

void cerca_matricola(char nome_file[], int matricola)
{
    Studente buffer; int n;
    
    FILE *Fp;

    Fp = fopen(nome_file, "rb");

    while (!feof(Fp))
    {
        n = fread(&buffer, sizeof(Studente), 1, Fp);

        if (n > 0)
        {
            if (buffer.matricola == matricola)
            {
                printf("Nome: %s", buffer.nome);
                printf("\n");
                printf("Cognome: %s", buffer.cognome);
                printf("\n");
                printf("Matricola: %d", buffer.matricola);
                printf("\n");
                printf("Media: %.2f", buffer.media);
                printf("\n");
            }
        }
    }

    fclose(Fp);
}

void aggiungi_studente(char nome_file[])
{
    Studente buffer;
    
    FILE *Fp;

    Fp = fopen(nome_file, "ab");

    printf("Inserisci il nome dello studente: ");
    scanf("%s", buffer.nome);
    printf("Inserisci il cognome dello studente: ");
    scanf("%s", buffer.cognome);
    printf("Inserisci la matricola dello studente: ");
    scanf("%d", &buffer.matricola);
    printf("Inserisci la media dello studente: ");
    scanf("%f", &buffer.media);
    fwrite(&buffer, sizeof(Studente), 1, Fp);

    fclose(Fp);
}