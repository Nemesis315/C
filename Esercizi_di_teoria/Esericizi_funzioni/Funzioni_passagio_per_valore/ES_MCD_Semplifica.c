#include<stdio.h>
int MCD (int,int);
void Semplifica (int x, int y, int z);

int main()
{
    int Num1,Num2;
    int Ris;

    printf("Inserire un numero interno per il numeratore: ");
    scanf("%d", &Num1);
    printf("Inserire un numero intero per il denominatore: ");
    scanf("%d", &Num2);

    Ris = MCD (Num1,Num2);

    printf("L'MCD tra %d e %d e: %d", Num1,Num2,Ris);

    Semplifica(Num1,Num2,Ris);


    return 0;
}

int MCD (int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y -x;
        }
    }
    
    return x;
}
void Semplifica (int x, int y, int z)
{
    x = x / z;
    
    y = y / z;

    printf("La frazione semplificata e %d/%d", x,y);
    printf("\n");
}