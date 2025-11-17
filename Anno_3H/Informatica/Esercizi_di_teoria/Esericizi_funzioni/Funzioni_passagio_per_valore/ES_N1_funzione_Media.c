#include<stdio.h>

float Media (int,int);

int main()
{
    int a,b;
    float Ris;

    printf("Inserire un numero intero: ");
    scanf("%d", &a);
    printf("Inserire un numero intero: ");
    scanf("%d", &b);

    Ris = Media(a,b);

    printf("La media tra %d e %d e: %.1f", a,b,Ris);
    printf("\n");
    Ris = Media(15,18);

    printf("La media e: %.1f", Ris);
    printf("\n");

    return 0;
}

float Media(int x, int y)
{
    float c;
    c = (float)(x+y)/2;
    return c;
}