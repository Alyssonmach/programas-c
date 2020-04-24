#include <stdio.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 4

void imprimeArray(int[][COLUNA]);

int main (void)
{
	setlocale(LC_ALL,"");
	
	int vetor[LINHA][COLUNA];
	int linha, coluna;
	
	printf("\t\t<<<<<PROGAMA QUE TRABALHA COM ARRAY MULTIDIMENSIONAL>>>>>\n\n");
	
	printf("preencha o valor do array:\n");
	
	for(linha = 0; linha <= LINHA - 1; linha++)
	{
		for(coluna = 0; coluna <= COLUNA - 1; coluna++)
		{
			printf("elemento[%d][%d]: ", linha, coluna);
			scanf("%d", &vetor[linha][coluna]);
		}
		printf("\n");
	}
	
	imprimeArray(vetor);
	
	return 0;
}

void imprimeArray(int vetor[][COLUNA])
{
	int linha, coluna, total = 0;
	
	for(linha = 0; linha <= LINHA - 1; linha++)
	{
		for(coluna = 0; coluna <= COLUNA - 1; coluna++)
		{
			printf("%5d", vetor[linha][coluna]);
			total += vetor[linha][coluna];
		}
			
		printf("\n");
	}
	
	printf("\n\nO valor total é %d.\n\n", total);
	
	return;
}