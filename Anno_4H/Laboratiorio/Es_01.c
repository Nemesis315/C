#include <stdio.h>
#define N 30

void scrivi_file(char nome_file[], int k);

void leggi_file(char nome_file[]);

void cerca_matricola(char nome_file[], int matricola);

void aggiungi_studente(char nome_file[]);

int menu (void);

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

    int scelta;

    int matricola;

    do
    {
        scelta= menu();
        switch (scelta)
        {
        case 1:
             printf("Quanti studenti vuoi inserire nel file? ");

            scanf("%d", &x);

            scrivi_file(nome_file, x);

            break;
        case 2:
            leggi_file(nome_file);

            break;
        case 3:
            printf("Inserisci la matricola da cercare: ");

            scanf("%d", &matricola);

            cerca_matricola(nome_file, matricola);

            break;
            
        case 4:
            aggiungi_studente(nome_file);

            break;
        case 0:
            printf("Arrivederci e buona giornata");
            printf("\n");
            break;
        default:
            printf("Hai sbagliato a inserire il numero tra quelli richiesti reinseriscilo");
            printf("\n");
            printf("\n");
            printf("\n");
            break;
        }
    } while (scelta != 0);
    

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

int menu(void)
{
    int scelta;
    printf("Digita 1 per inserire gli studenti nel file(sovracrivere il file)");
    printf("\n");
    printf("Digita 2 visualizzare gli studenti nel file");
    printf("\n");
    printf("Digita 3 cercare studente tramite matricola");
    printf("\n");
    printf("Digita 4 aggiungere uno studente al file");
    printf("\n");
    printf("Digita 0 per uscire dal menu");
    printf("\n");
    scanf("%d", &scelta);
    return scelta;
}