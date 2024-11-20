#include<stdio.h>

int main()
{
    int num,i;

    printf("Inserire un numero intero: ");
    printf("\n");
    scanf("%d", &num);
    printf("I primi 10 multipli di %d sono: \n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;    
}