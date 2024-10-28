#include <stdio.h>

int main()
{
	int a, b;
	
	printf ("Inserisci il valore numerico di a: ");
	scanf ("%d", &a);
	printf ("\nInserisci il valore numerico di b: ");
	scanf ("%d", &b);
	printf ("\n");
	
	if (a==b)
	{
		printf ("a e b sono uguali");
	}
	else
	{
		if (a>b)
		{
			printf ("Il minore e b il maggiore e a");
		}
		else
		{
			printf ("Il minore e' a=%d il maggiore e' b=%d\n", a, b);
		}
	}

	return 0;
}