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
    int md, cr, voto_finale;

    //Acquisizione della media e dei crediti da tastiera
    printf("Inserisci la media dello studente: ");
    scanf("%d", &md);
    printf("\n");
    printf("Inserisci i crediti ottenuti durante il semestre dello studente: ");
    scanf("%d", &cr);
    printf("\n");

    voto_finale = md;

    //Applicazione del bonus in base alle condizioni specificate
    if (md >= 28 && cr > 24)
    {
        voto_finale = md+2;
        printf("Media iniziale: %d",md);
        printf("\n");
        printf("Numero di crediti: %d",cr);
        printf("\n");
        printf("Voto finale: %d", voto_finale);
        printf("\n");
        
    }
    else
    {
        if (md >= 25 && md <=27 && cr >= 18 && cr <=24)
        {
            voto_finale = md+1;
            printf("Media iniziale: %d", md);
            printf("\n");
            printf("Numero di crediti: %d", cr);
            printf("\n");
            printf("Voto finale: %d", voto_finale);
            printf("\n");
        }
        else
        {
            printf("Media iniziale: %d", md);
            printf("\n");
            printf("Numero di crediti: %d", cr);
            printf("\n");
            printf("Voto finale: %d", voto_finale);
            printf("\n");
        }
    }
    
    return 0;
}