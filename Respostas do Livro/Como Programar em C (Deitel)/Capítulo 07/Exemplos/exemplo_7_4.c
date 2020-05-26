#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");

	int valor, *valorPtr;

	valor = 5;
	valorPtr = &valor;

	printf("O endereço da variável valor é %p\n", &valor);
	
	printf("O endereço da variável valorPtr é %p\n", valorPtr);
	
	printf("O valor da variável valorPtr é %d\n", *valorPtr);
	
	printf("O valor da variável valor é %d\n", valor);
	
	printf("&*valorPtr é %p\n", &*valorPtr);
	
	printf("*&valorPtr é %p\n", *&valorPtr);
	
	return 0;
}
