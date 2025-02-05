/*
Funzione ricorsiva fattoriale
*/

#include <stdio.h>

int Fatt (int x);

int main()
{
    int num, Ris;
    
    printf("Inserire il numero per sapere il suo fattorile: ");
    scanf("%d", &num);

    Ris=Fatt(num);

    printf("Il fattoriale di %d vale: %d", num,Ris);
    printf("\n");

    return 0;
    
}

int Fatt (int x)
{
    if( x == 0 )
    {
        return 1;
    }
    else
    {
        return (Fatt( x - 1 ) * x );
    } 
}
