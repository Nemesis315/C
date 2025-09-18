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

    printf("Inserire il proprio nome: ");
    scanf("%s", S1.Nome);

    printf("Inserire il proprio cognome: ");
    scanf("%s", S1.Cognome);

    S2 = S1;

    return 0;
}