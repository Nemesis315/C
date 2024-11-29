#include<stdio.h>

int main ()
{
    int num;

    printf("Inserire un munero intero: ");
    scanf("%d", &num);
    printf("\n");

    printf("Num vale: %d", num);
    printf("\n");

    if (num % 2 == 0)
    {
        printf("I numeri pari inferiori a num sono:");
        printf("\n");

        do
        {
            num=num - 2;
            printf("%d", num);
            printf("\n");
        } while (num != 0);
        
    }
    else
    {
        printf("Non ci sono numeri pari inferiori a %d", num);
        printf("\n");
    }
    return 0;
}
