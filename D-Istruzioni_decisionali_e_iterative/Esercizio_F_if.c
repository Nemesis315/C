/*
Autore: Matteo Conte
Classe: 3H
Data:03/11/2024

Calcolo del voto finale con bonus Scrivere un programma che calcoli il voto finale di uno studente in base alla sua media e al numero di crediti ottenuti durante il semestre. Le regole sono le seguenti:
Se la media è maggiore o uguale a 28 e lo studente ha accumulato più di 24 crediti, aggiungere un bonus di 2 punti al voto finale.
Se la media è tra 25 e 27 inclusi, e lo studente ha accumulato tra 18 e 24 crediti, aggiungere un bonus di 1 punto.
Se la media è inferiore a 25 o i crediti sono meno di 18, il voto finale rimane invariato. Il programma deve visualizzare la media iniziale, il numero di crediti e il voto finale (compreso il bonus, se applicabile).


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
    printf("Inserire la media dello studente: ");
    scanf("%d", &md);
    printf("\n");
    printf("Inserire i crediti ottenuti dallo studente durante il semestre: ");
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
        if ((md >= 25 && md <=27) && (cr >= 18 && cr <=24))
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