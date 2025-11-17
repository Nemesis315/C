#include<stdio.h>

int main()
{
    int s,c,num;
    s=0;
    c=0;
    do
    {
       printf("Inserisci numero interi: ");
       scanf("%d", &num);
       s=s+num;
       c=c+1;
    } while (c<10);
    printf("La somma e uguale a: %d" ,s);
    printf("\n");
    
    return 0;
}