#include<stdio.h>

int Fatt (int x);

int main()
{
    int a;
    int Ris;

    printf("Inserire un numero intero: ");
    scanf("%d", &a);
    printf("\n");

    Ris = Fatt(a);

    printf("Il fattoriale di %d e : %d",a,Ris);
    printf("\n");

    return 0;
}

int Fatt (int x)
{
    int R = 1, cont;

    for (cont = x; cont>0; cont--)
    {
        R*=x;
    }
    return R;
}