#include <stdio.h>

#define SIZE 10

void someFunction(const int b[], int starIndex, int size);

int main(void)
{
	int a[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	printf("\nResposta e\n");
	someFunction(a, 0, SIZE);
	printf("\n");
	return 0;
}

void someFunction(const int b[], int starIndex, int size)
{
	if(starIndex < size)
	{
		someFunction(b, starIndex + 1, size);
		printf("%d ", b[starIndex]);
	}
	return;
}
		