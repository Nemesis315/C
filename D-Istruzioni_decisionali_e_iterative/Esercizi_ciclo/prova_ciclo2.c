#include<stdio.h>

int main()
{
    int max,min,num;
    printf("Inserire il numero \n");
    do
    {
        scanf("%d", &num);
        if (num>max)
        {
            max=num;
        }
        if (num<min)
        {
            num=min;
        }
        
    } while (num!=0);
    printf("Il maggiore e' :%d", max);
    printf("\n");
    printf("Il minore e' :%d ", min);
    printf("\n");
    return 0; 
}