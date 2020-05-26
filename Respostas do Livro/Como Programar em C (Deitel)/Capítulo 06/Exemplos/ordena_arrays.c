#include <stdio.h>
#include <locale.h>

#define TAM 5

void bolha_crescente(int[]);
void bolha_decrescente(int[]);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[TAM], indice;
	
	printf("\t\t<<<<<PROGAMA QUE ORDENA UM ARRAY>>>>>\n\n");
	
	printf("Digite 5 valores para os vetores:\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%dº Número: ", indice + 1);
		scanf("%d", &vetor[indice]);
	}
	
	bolha_crescente(vetor);
	
	printf("\n\nO vetor em ordem crescente é:\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%d ", vetor[indice]);
	}
	
	bolha_decrescente(vetor);
	
	printf("\n\nO vetor em ordem decrescente é:");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%d ", vetor[indice]);
	}
	
	return 0;
}

void bolha_crescente(int vetor[])
{
	int indice1, indice2, auxiliar;
	
	for(indice1 = 0; indice1 <= TAM - 1; indice1++)
		for(indice2 = 0; indice2 <= TAM - 2; indice2++)
			if(vetor[indice2] > vetor[indice2 + 1])
			{
				auxiliar = vetor[indice2];
				vetor[indice2] = vetor[indice2 + 1];
				vetor[indice2 + 1] = auxiliar;
			}
	return;
}

void bolha_decrescente(int vetor[])
{
	int indice1, indice2, auxiliar;
	
	for(indice1 = 0; indice1 <= TAM - 1; indice1++)
		for(indice2 = 0; indice2 <= TAM - 2; indice2++)
			if(vetor[indice2] < vetor[indice2 + 1])
			{
				auxiliar = vetor[indice2];
				vetor[indice2] = vetor[indice2 + 1];
				vetor[indice2 + 1] = auxiliar;
			}
	return;
}