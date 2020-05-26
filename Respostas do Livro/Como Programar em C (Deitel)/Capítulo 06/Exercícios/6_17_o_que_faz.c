#include <stdio.h>

#define SIZE 10

int whatIsThis(const int b[], int p);

int main(void)
{
	int x;
	int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	x = whatIsThis(a, SIZE);
	
	printf("Resultado e %d\n", x);
	
	return 0;
}

int whatIsThis(const int b[], int p)
{
	if( p == 1)
	{
		return b[0];
	}
	else
		return b[p - 1] + whatIsThis(b, p - 1);
}

//A função soma os valores do vetor;