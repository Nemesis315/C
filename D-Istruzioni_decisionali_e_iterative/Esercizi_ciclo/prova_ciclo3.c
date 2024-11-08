#include<stdio.h>

int main()
{
    int num,media,contatore,somma;
    contatore=0;
    somma=0;
    do
    {
        printf("Inserire il numero \n ");
        scanf("%d", &num);
        somma=somma+num;
        contatore= contatore+1;
    } while (num != 0);

    media= somma/contatore;
    printf("Media =%d", media);
    printf("\n");
    printf("Somma =%d", somma);
    printf("\n");
    
    return 0; 

}