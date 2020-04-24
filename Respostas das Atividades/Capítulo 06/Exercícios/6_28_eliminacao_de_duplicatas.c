#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

void ArraySortido(int[], int);
void removeDuplicatas(int[], int);
void imprimeArray(int[], int);

int main(void)
{
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int vetor[TAM];
	
	printf("\t\t<<<<<PROGAMA QUE ELIMINA DUPLICATAS>>>>>\n\n");	
	
	ArraySortido(vetor, TAM);
	imprimeArray(vetor, TAM);
	removeDuplicatas(vetor, TAM);
	imprimeArray(vetor, TAM);
	
	return 0;
}

void ArraySortido(int array[], int tamanho)
{
	
	int indice, variavel;
	
	for(indice = 0; indice <= tamanho - 1; indice++)
	{
		variavel = rand() % 20 + 1;
		array[indice] = variavel;
	}
	
	return;
}

void removeDuplicatas(int array[], int tamanho)
{
	int indice1, indice2;
	
	for(indice1 = 0; indice1 <= tamanho - 1; indice1++)
		if(array[indice1] != 0)
			for(indice2 = indice1 + 1; indice2 <= tamanho - 1; indice2++)
				if(array[indice1] == array[indice2])
					array[indice2] = 0;
				
	return;
}

void imprimeArray(int array[], int tamanho)
{
	int indice;
	
	printf("\n\nO array é:\n");
	
	for(indice = 0; indice <= tamanho - 1; indice++)
		if(array[indice] != 0)
			printf("%5d", array[indice]);
	
	return;
}