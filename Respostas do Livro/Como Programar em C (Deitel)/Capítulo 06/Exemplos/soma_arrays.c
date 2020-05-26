#include <stdio.h>
#include <locale.h>

#define TAM 5

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor1[TAM], vetor2[TAM], soma[TAM], indice;
	
	printf("\t\t<<<<<PROGAMA QUE SOMA DOIS ARRAYS>>>>>\n\n");
	
	printf("Insira %d valores inteiros para o primeiro vetor:\n", TAM);
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("\n%dº número: ", indice + 1);
		scanf("%d", &vetor1[indice]);
	}
	
	printf("\n\nInsira %d valores inteiros para o segundo vetor:\n", TAM);
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("\n%dº número: ", indice + 1);
		scanf("%d", &vetor2[indice]);
	}
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		soma[indice] = (vetor1[indice] + vetor2[indice]);
	}
	
	printf("\n\nO resultado da soma dos dois vetores é:\n\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%d ", soma[indice]);
	}
	
	printf("\n\n");
	
	return 0;
}

