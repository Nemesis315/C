#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void caricatabella( persona s[] );

struct Data
{
    int giorno;
    
    int mese;

    int anno;

} typedef data;

struct Nascita
{
    char Nome_Cognome[N];

    data Nascita;

} typedef nascita;

struct Persona
{
    nascita Persona;
    
    int voti[N];
} typedef persona;

void caricatabella( persona s[] )
{
    int i;

    for ( i = 0; i < N; i++)
    {
        
    }
    
}