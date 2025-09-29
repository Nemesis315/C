#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 20

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


