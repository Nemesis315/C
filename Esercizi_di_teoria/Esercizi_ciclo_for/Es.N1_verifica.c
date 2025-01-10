#include <stdio.h>

int main()
{
    int num,cont,somma; float media;

    printf("Inserire un numero intero positivo:");
    scanf("%d", &num);
    printf("\n");
    somma=0;

    for (cont = 1; cont < num; cont++)
    {
        somma= somma+cont;
    }
    media= somma/cont;

    printf("%d", cont);
    printf("\n");
    printf("%d", somma);
    printf("\n");
    printf("Media dei numeri compresi tra 1 e %d = %.1f", num,media);
    printf("\n");
    return 0;
}