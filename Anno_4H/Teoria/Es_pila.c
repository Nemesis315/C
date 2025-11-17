#include <stdio.h>
#define N 10
int top = -1;//indica indice dell'elemento in cima

int is_empty(int []); //restituisce 1 se vuota, 0 altrimenti

int is_full(int []); //restituisce 1 se piena, 0 altrimenti

int Top(int []); //visualizza sul monitor elemento in cima

int push(int [],int x); //inserisce x in cima,restituisce -1 se non è andato a buon fine l'inserimento 1 altrimenti

int pop(int []); //cancella elemento in cima, restituisce -1 se non è andato a buon fine

int main()
{
    int stack[N];
    
    int emp,full;

    int x;

    if(is_empty(stack))

    {
        printf("pila vuota");
        printf("\n");
    }
    else
    {
        printf("Pila non vuota");
        printf("\n");
    }
    if(is_full(stack))
    {
        printf("pila piena");
        printf("\n");
    }
    else
    {   
        printf("pila non piena");
        printf("\n");
    }

    x = Top(stack);

    if ( x == 0 )
    {
        printf("Pila vuota non ci sono elementi al suo interno");
        printf("\n");
    }
    else
    {
        printf("%d", x);
        printf("\n");
    }
    
}


int is_empty(int arr[])
{
    if( top==-1 )
    {
        return 1;
    }
    
    return 0;
}


int is_full(int arr[])
{
    if( top == N-1 )
    {
        return 1;
    }

    return 0;

}


int Top(int arr[]) //visualizza sul monitor elemento in cima
{
    if ( is_empty(arr) == 1 )
    {
        return 0;
    }
    else
    {
        return arr[top];
    }
}

int push(int arr[],int x) //inserisce x in cima,restituisce -1 se non è andato a buon fine l'inserimento 1 altrimenti
{
    if ( is_full(arr) == 1)
    {
        return -1;
    }

    top++;

    arr[top] = x;

    return 1;
}

int pop(int arr[]) //cancella elemento in cima, restituisce -1 se non è andato a buon fine
{
    if ( is_empty(arr) == 1)
    {
        return -1;
    }

    top--;

    return arr[top+1];

}