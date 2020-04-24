#include <stdio.h>
#include <locale.h>

void cubo(int *valor);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int valor;
	
	valor = 5;
	
	printf("Valor é igual a %d\n", valor);
	
	cubo(&valor);
	
	printf("\nValor depois da função agora é: %d\n\n", valor);
	return 0;
}

void cubo(int *valor)
{
	(*valor) =  (*valor) * (*valor) * (*valor);
}