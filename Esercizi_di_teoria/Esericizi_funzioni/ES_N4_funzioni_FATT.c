#include<stdio.h>

int Fatt (int x);
int Fatt2(int x);

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

    Ris = Fatt2(a);
    printf("Il fattoriale di %d e : %d",a,Ris);
    printf("\n");

    return 0;
}

int Fatt (int x)
{
    int R = 1, cont;

    for (cont = 1; cont<=x; cont++)
    {
        R *= cont;
    }
    return R;
}
int Fatt2(int x)
{
    int R = 1, cont;

    for (cont = x; cont>0; cont--)
    {
        R *= cont;
    }
    return R;
}