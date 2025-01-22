#include<stdio.h>

void Scambia (int *x, int *y);

int main()
{

    int Num1,Num2;
    int Ris;

    printf("Inserire un numero interno: ");
    scanf("%d", &Num1);
    printf("Inserire un numero intero: ");
    scanf("%d", &Num2);

    Scambia(&Num1,&Num2);

    printf("Il varore di Num1 e: %d", Num1);
    printf("\n");
    printf("Il valore di Num2 e: %d", Num2);
    printf("\n");

    return 0;
}

void Scambia (int *x, int *y)
{
    int aux;

    aux = *x;

    *x = *y;

    *y = aux;
}