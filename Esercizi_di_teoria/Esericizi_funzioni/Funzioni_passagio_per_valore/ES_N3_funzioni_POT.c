#include<stdio.h>

int POT (int x, int y);

int main()
{
    int a,b;
    int Ris;

    printf("Inserire un numero intero: ");
    scanf("%d", &a);
    printf("\n");

    printf("Inserire un numero intero: ");
    scanf("%d", &b);
    printf("\n");

    Ris = POT(a,b);

    printf("La potenza di %d alla %d e: %d", a,b,Ris);
    printf("\n");

    return 0;
}

int POT (int x,int y)
{
    int R = 1, cont;

    for (cont = x; cont>=1; cont--)
    {
        R*=x;
    }
    return R;
}