#include <stdio.h>
#include <locale.h>

#define TAM 1000

void preencheArray(int[], int);
void verificaPrimo(int[], int);
void imprimeArray(int[], int);

int main(void)
{
	setlocale(LC_ALL,"");
	
	printf("\t\t<<<<<PROGAMA CRIVÓ DE ERSTÓTENES>>>>>\n\n");
	
	int vetor[TAM];
	
	preencheArray(vetor, TAM);
	verificaPrimo(vetor, TAM);
	imprimeArray(vetor, TAM);
	
	return 0;
}

void preencheArray(int array[],int tamanho)
{
	int indice;
	
	for(indice = 0; indice <= tamanho - 1; indice++)
		array[indice] = 1;
	
	return;
}

void verificaPrimo(int array[], int tamanho)
{
	int indice1, indice2;
	
	for(indice1 = 2; indice1 <= tamanho - 1; indice1++)
		if(array[indice1] != 0)
			for(indice2 = indice1 + 1; indice2 <= tamanho - 1; indice2++)
				if(indice2 % indice1 == 0)
					array[indice2] = 0;
		
	return;
}

void imprimeArray(int array[], int tamanho)
{
	int indice;
	
	printf("\n\nO vetor composto de números primos é:\n\n");
	
	for(indice = 2; indice <= tamanho - 1; indice++)
		if(array[indice] == 1)
			printf("%d\n", indice);
		
	return;
}