#include<stdio.h>

int main()
{
    int num,cont,somma,prodotto;

    printf("Inserire un numero intero: ");
    scanf("%d", &num);
    printf("\n");
    somma=0;
    prodotto=1;

    while (num != 0)
    {
        if (num>0)
        {
            somma=somma+num;
        
        }
        else
        {
            prodotto=prodotto*num;
        }
    }
    printf("Sono stati inseriti 6 numeri");
    printf("\n");
    printf("Somma dei numeri positivi = %d", somma);
    printf("\n");
    printf("Prodotto dei numeri negativi = %d", prodotto);
    printf("\n");

    return 0;
    
}