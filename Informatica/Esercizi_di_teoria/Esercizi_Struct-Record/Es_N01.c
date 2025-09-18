#include <stdio.h>


#define N 10

struct Es_N01
{
    char Cognome[N];

    char Nome[N];

    int Voti[8];
} typedef Es_01;

int main()
{
    Es_01 S1,S2;

    for (int i = 0; i < 8; i++)
    {
        printf("Inserire un numero (compreso tra 2 e 10):");
        
        scanf("%d", &S1.Voti[i]);
    }

    scanf("%s", S1.Cognome);
}