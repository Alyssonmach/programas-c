#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"");
	int array[20], valor;
	
	printf("\nTamanho em bytes do array: %d\n", sizeof(array));
	printf("\nTamanho em bytes do valor: %d\n", sizeof(valor));
	return 0;
}