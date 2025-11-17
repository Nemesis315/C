#include <stdio.h>
#define N 10
int top = -1;//indica indice dell'elemento in cima

int is_empty(int []); //restituisce 1 se vuota, 0 altrimenti

int is_full(int []); //restituisce 1 se piena, 0 altrimenti

int top2(int []); //visualizza sul monitor elemento in cima

int push(int [],int x); //inserisce x in cima,restituisce -1 se non è andato a buon fine l'inserimento 1 altrimenti

int pop(int []); //cancella elemento in cima, restituisce -1 se non è andato a buon fine

int main()
{
    int stack[N];
    
    int emp,full;

    if(is_empty(stack))

    {
        printf("pila vuota");
    }
    else
    {
        printf("Pila non vuota");
    }
    if(is_full(stack))
    {
        printf("pila piena");
    }
    else
    {   
        printf("\npila non piena");
    }
}


int is_empty(int arr[])
{
    if(top==-1)
    {
        return 1;
    }
    
    return 0;
}


int is_full(int arr[])
{
    if(top==N-1)
    {
        return 1;
    }

    return 0;

}