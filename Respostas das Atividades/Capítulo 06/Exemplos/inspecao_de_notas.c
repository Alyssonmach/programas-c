#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 30
#define NOTAS 11

int main(void)
{
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int respostas[TAMANHO], frequencia[NOTAS] = {0}, indice, historiograma;
	
	printf("\t\t<<<<<PROGAMA QUE FAZ A ANALISE HISTORIOGRAFICA>>>>>\n\n");
	
	for(indice = 0; indice <= TAMANHO - 1; indice++)
	{
		respostas[indice] = (rand() % (NOTAS - 1)) + 1;
	}
	
	for(indice = 0; indice <= TAMANHO - 1; indice++)
	{
		++frequencia[respostas[indice]];
	}
	
	printf("\n\n%s%20s%30s\n", "NOTA", "FREQUÊNCIA", "HISTORIOGRAMA");
	
	for(indice = 1; indice <= NOTAS - 1; indice++)
	{
		printf("\n%d%22d%20s", indice, frequencia[indice], " ");
		
		for(historiograma = 1; historiograma <= frequencia[indice]; historiograma++)
		{
			printf("*");
		}
		
	}
	
	printf("\n\nNotas totais: %d.\n\n", TAMANHO);
	return 0;
}