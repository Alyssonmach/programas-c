#include <stdio.h>
#include <locale.h>

int main(void)
{
	char array[5];
	
	printf("array = %p", array);
	printf("\n&array[0] = %p", &array[0]);
	printf("\n&array = %p", &array);
	
	return 0;
}