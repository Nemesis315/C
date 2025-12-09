#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 30
#define MAX_STUDENTI 100
#define FILE_STUDENTI "studenti.dat"

typedef struct {
    char nome[MAX_NOME];
    char cognome[MAX_NOME];
    int matricola;
    float media;
} Studente;

void inserisciStudenti();
void visualizzaStudenti();
void cercaStudente();
void aggiungiStudente();
void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    int scelta;
    
    while (1) {
        printf("\n=== GESTIONE ARCHIVIO STUDENTI ===\n");
        printf("1. Inserisci studenti (sovrascrive il file)\n");
        printf("2. Visualizza studenti\n");
        printf("3. Cerca studente per matricola\n");
        printf("4. Aggiungi studente\n");
        printf("0. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);
        getchar(); // Consumare il newline residuo
        
        switch (scelta) {
            case 1:
                inserisciStudenti();
                break;
            case 2:
                visualizzaStudenti();
                break;
            case 3:
                cercaStudente();
                break;
            case 4:
                aggiungiStudente();
                break;
            case 0:
                printf("Arrivederci!\n");
                exit(0);
            default:
                printf("Opzione non valida!\n");
        }
    }
}

void inserisciStudenti() {
    FILE *fp;
    Studente s;
    int n;
    
    printf("Quanti studenti vuoi inserire? ");
    scanf("%d", &n);
    getchar();
    
    if (n <= 0 || n > MAX_STUDENTI) {
        printf("Numero non valido!\n");
        return;
    }
    
    fp = fopen(FILE_STUDENTI, "wb");
    if (fp == NULL) {
        printf("Errore nell'apertura del file!\n");
        return;
    }
    
    for (int i = 0; i < n; i++) {
        printf("\n--- Studente %d ---\n", i + 1);
        printf("Nome: ");
        fgets(s.nome, MAX_NOME, stdin);
        s.nome[strcspn(s.nome, "\n")] = '\0';
        
        printf("Cognome: ");
        fgets(s.cognome, MAX_NOME, stdin);
        s.cognome[strcspn(s.cognome, "\n")] = '\0';
        
        printf("Matricola: ");
        scanf("%d", &s.matricola);
        
        printf("Media: ");
        scanf("%f", &s.media);
        getchar();
        
        fwrite(&s, sizeof(Studente), 1, fp);
    }
    
    fclose(fp);
    printf("\n%d studenti salvati nel file!\n", n);
}

void visualizzaStudenti() {
    FILE *fp;
    Studente s;
    int count = 0;
    
    fp = fopen(FILE_STUDENTI, "rb");
    if (fp == NULL) {
        printf("File non trovato! Inserisci prima gli studenti.\n");
        return;
    }
    
    printf("\n=== ELENCO STUDENTI ===\n");
    while (fread(&s, sizeof(Studente), 1, fp) == 1) {
        printf("\n%d. Nome: %s\n", ++count, s.nome);
        printf("   Cognome: %s\n", s.cognome);
        printf("   Matricola: %d\n", s.matricola);
        printf("   Media: %.2f\n", s.media);
    }
    
    fclose(fp);
    if (count == 0) {
        printf("Nessuno studente trovato nel file.\n");
    } else {
        printf("\nTotale: %d studenti\n", count);
    }
}

void cercaStudente() {
    FILE *fp;
    Studente s;
    int matricola_cerca;
    int trovato = 0;
    
    printf("Inserisci la matricola da cercare: ");
    scanf("%d", &matricola_cerca);
    getchar();
    
    fp = fopen(FILE_STUDENTI, "rb");
    if (fp == NULL) {
        printf("File non trovato!\n");
        return;
    }
    
    while (fread(&s, sizeof(Studente), 1, fp) == 1) {
        if (s.matricola == matricola_cerca) {
            printf("\n=== STUDENTE TROVATO ===\n");
            printf("Nome: %s\n", s.nome);
            printf("Cognome: %s\n", s.cognome);
            printf("Matricola: %d\n", s.matricola);
            printf("Media: %.2f\n", s.media);
            trovato = 1;
            break;
        }
    }
    
    if (!trovato) {
        printf("Studente con matricola %d non trovato.\n", matricola_cerca);
    }
    
    fclose(fp);
}

void aggiungiStudente() {
    FILE *fp;
    Studente s;
    
    fp = fopen(FILE_STUDENTI, "ab");
    if (fp == NULL) {
        printf("Errore nell'apertura del file!\n");
        return;
    }
    
    printf("\n--- Nuovo Studente ---\n");
    printf("Nome: ");
    fgets(s.nome, MAX_NOME, stdin);
    s.nome[strcspn(s.nome, "\n")] = '\0';
    
    printf("Cognome: ");
    fgets(s.cognome, MAX_NOME, stdin);
    s.cognome[strcspn(s.cognome, "\n")] = '\0';
    
    printf("Matricola: ");
    scanf("%d", &s.matricola);
    
    printf("Media: ");
    scanf("%f", &s.media);
    getchar();
    
    fwrite(&s, sizeof(Studente), 1, fp);
    fclose(fp);
    
    printf("Studente aggiunto con successo!\n");
}
