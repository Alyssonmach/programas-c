#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50

void preencheArray(int[]);
int verificaArray(int[], int);
int pesquisaLinear(int[], int, int);
int pesquisaBinaria(int[], int, int);
void bolha(int[]);

int main(void)
{
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int vetor[TAM] = {0}, indice, chave, valor;
	
	printf("\t\t<<<<<PESQUISA LINEAR E PESQUISA BINÁRIA>>>>>\n\n");
	
	preencheArray(vetor);
	
	printf("\n\nO array desordenado é:\n\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		if(indice % 10 == 0)
			printf("\n");
		
		printf("%d ", vetor[indice]);
	}
	
	printf("\n\nInforme um valor para verificar em que elemento do array ele se encontra: ");
	scanf("%d", &chave);
	
	if((valor = pesquisaLinear(vetor, chave, TAM)) != -1)
		printf("\n\n%d está no elemento %d.\n\n", chave, valor);
	else
		printf("\n\nValor não encontrado no array\n\n");
	
	bolha(vetor);
	
	printf("\n\nO array ordenado é:\n\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		if(indice % 10 == 0)
			printf("\n");
		
		printf("%d ", vetor[indice]);
	}
	
	if((valor = pesquisaBinaria(vetor, chave, TAM)) != -1)
		printf("\n\n%d está no elemento %d.\n\n", chave, valor);
	else
		printf("\n\nValor não encontrado no array\n\n");
	
	
	return 0;
}

void preencheArray(int array[])
{
	int indice, numero, valor;
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		do
		{
			
		numero = (rand() % 1000) + 1;
		if((valor = verificaArray(array, numero)) == 0)
			array[indice] = numero;
		
		}while(valor == 1);
	}
	
	return;
}
int verificaArray(int array[], int digito)
{
	int indice;
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		if(array[indice] == digito)
			return 1;
	}
	
	return 0;
}

void bolha(int vetor[])
{
	int indice1, indice2, auxiliar;
	
	for(indice1  = 0; indice1 <= TAM - 1; indice1++)
		for(indice2 = 0; indice2 <= TAM - 2; indice2 ++)
			if(vetor[indice2] > vetor[indice2 + 1])
			{
				auxiliar = vetor[indice2];
				vetor[indice2] = vetor[indice2 + 1];
				vetor[indice2 + 1] = auxiliar;
			}
			
    return;
}

int pesquisaLinear(int vetor[], int chave, int tamanho)
{
	int indice;
	
	for(indice = 0; indice <= tamanho -1; indice++)
		if(vetor[indice] == chave)
			return indice;
    return -1;
}

int pesquisaBinaria(int vetor[], int chave, int tamanho)
{
	int inicio, meio, fim;
	
	inicio = 0;
	fim = tamanho - 1;
	
	while(inicio <= fim)
	{
		
		meio = (inicio + fim) / 2;
		
		if(chave == vetor[meio])
			return meio;
		if(chave < vetor[meio])
			fim = meio - 1;
		else
			inicio = meio + 1;
		
	}
	return -1;
}