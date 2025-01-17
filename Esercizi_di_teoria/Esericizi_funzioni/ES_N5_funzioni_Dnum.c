#include<stdio.h>

void Dnum(int x); //Dmun = Divisori di un numero

int main()
{
    int Num;
    printf("Inserire un numero intero: ");
    scanf("%d", &Num);
    printf("\n");

    Dnum(Num);

    return 0;

}

void Dnum(int x)
{
    int cont;

     for (cont = 1; cont <= x; cont++) {
        if (x % cont == 0) 
        {
            printf("I Divisori di %d sono: ", x);
            printf("%d\n", cont);
            
        }
    }
}