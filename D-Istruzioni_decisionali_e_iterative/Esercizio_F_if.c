/*
Autore: Matteo Conte
Classe: 3H
Data:03/11/2024

Input: media, numero di crediti dello studente
Elaborazione: voto finale
Output: voto finale con bonus
*/

#include<stdio.h>

int main()
{
    //dichiarazione delle variabili
    int media, crediti, voto_finale;

    //Acquisizione della media e dei crediti da tastiera
    printf("Inserisci la media dello studente: ");
    scanf("%d", &media);
    printf("\n");
    printf("Inserisci i crediti ottenuti durante il semestre dello studente: ");
    scanf("%d", &crediti);
    printf("\n");

    voto_finale = media;

    //Applicazione del bonus in base alle condizioni specificate
    if (media >= 28 && crediti > 24)
    {
        voto_finale +2;
        printf("Media iniziale: %d", &media);
        printf("\n");
        printf("Numero di crediti: %d", &crediti);
        printf("\n");
        printf("Voto finale: %d", &voto_finale);
        printf("\n");
    }
    else
    {
        if (media >= 25 && media <=27 && crediti >= 18 && crediti <=24)
        {
            voto_finale +1;
            printf("Media iniziale: %d", &media);
            printf("\n");
            printf("Numero di crediti: %d", &crediti);
            printf("\n");
            printf("Voto finale: %d", &voto_finale);
            printf("\n");
        }
        else
        {
            printf("Media iniziale: %d", &media);
            printf("\n");
            printf("Numero di crediti: %d", &crediti);
            printf("\n");
            printf("Voto finale: %d", &voto_finale);
            printf("\n");
        }
    }
    
    return 0;
}