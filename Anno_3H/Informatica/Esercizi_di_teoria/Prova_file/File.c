#include <stdio.h>

int main()
{
    char nomeFile[] = { "/workspaces/C/Informatica/Esercizi_di_teoria/Prova_file/file.txt" };

    int err;

    char c;

    FILE *puntaFile;

    err = fopen_s(&puntaFile, nomeFile, "r");

    if (err == 0)
    {
        while (!feof(puntaFile))
        {
            c = fgetc(puntaFile);

            printf("%c", c);

        }
        
        err = fclose(puntaFile);
    }
    else
    {
        printf("Il file non puo essere aperto");

        printf("\n");
    }
    
}