#include <stdio.h>
#include <locale.h>

#define TAM 10

void bolha(int *const array, const int tamanho);

int main(void)
{
	setlocale(LC_ALL,"");
	int vetor[TAM] = {2, 6, 9, 10, 8, 7, 4, 3, 2, 1};
	int indice;
	
	printf("<<<<ORDENAÇÃO BORBULHANTE COM APONTADORES>>>>>\n\n");
	
	printf("Vetor desordenado:\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
		printf("%3d", vetor[indice]);
	
	bolha(vetor, TAM);
	
	printf("\n\nVetor ordenado por apontadores:\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
		printf("%3d", vetor[indice]);
	
	printf("\n\n");
	
	return 0;
}

void bolha(int *const array, const int tamanho)
{
	void troca(int *elemento1, int *elemento2);
	int indice1, indice2;
	
	for(indice1 = 0; indice1 <= tamanho - 1; indice1++)
		for(indice2 = 0; indice2 <= tamanho - 2; indice2++)
			if(array[indice2] > array[indice2 + 1])
				troca(&array[indice2], &array[indice2 + 1]);
	return;
}

void troca(int *elemento1, int *elemento2)
{
	int auxiliar;
	
	auxiliar = *elemento1;
	*elemento1 = *elemento2;
	*elemento2 = auxiliar;
	
	return;
}