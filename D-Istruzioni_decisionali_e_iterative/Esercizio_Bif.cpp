#include <stdio.h>

int main()
{
	int a, b;
	
	printf ("Inserisci il valore numerico di a \n");
	scanf ("%d", &a);
	printf ("Inserisci il valore numerico di b \n");
	scanf ("%d", &b);
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
			printf ("Il minore e a il maggiore e b");
		}
	}
	return 0;
}
