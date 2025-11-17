#include<stdio.h>

#define N 100

void leggi_stringa( char str[] );

void stampa_stringa( char str[] );

int lunghezza_stringa( char str[] );

int main()
{
    int r;
    char str1 [N];

    leggi_stringa(str1);

    printf("\n");
    printf("\n");

    stampa_stringa(str1);
    printf("\n");

    r = lunghezza_stringa(str1);

    printf("La lunghezza della stringa e: %d", r);
    printf("\n");





    return 0;
}



void leggi_stringa( char str[] )
{
    char fine_str = '#'; int i = 0;
    printf("Per dire che la stringa e terminata digitare #");
    printf("\n");

    do
    {
        scanf("%c", &str[i]);
        i++;
    } while (str[i-1] != fine_str);
    str[i-1] = '\0';
}


void stampa_stringa( char str[] )
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    
}


int lunghezza_stringa( char str[] )
{
    int i = 0; int cont = 0;
    while (str[i] != '\0')
    {
        i++;
        cont++;
    }

    return cont;
}