#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define FACE 7
#define LANCA 6000

int main(void)
{
	setlocale(LC_ALL,"");
	srand(time(NULL));

	int frequencia[FACE] = {0}, dados, indice, total = 0;
	
	printf("\t\t<<<<<PROGAMA QUE LANÇA DADOS>>>>>\n\n");
	
	for(indice = 1; indice <= LANCA; indice++)
	{
		dados = (rand() % 6) + 1;
		++frequencia[dados];
	}
	
	printf("%s%13s\n", "FACE", "FREQUÊNCIA");
	
	for(indice = 1; indice <= FACE - 1; indice++)
	{
		printf("\n%d%15d", indice, frequencia[indice]);
	}
	
	for(indice = 0; indice <= FACE - 1; indice++)
	{
		total += frequencia[indice];
	}
	
	printf("\n\nTOTAL DE LANÇAMENTOS: %d.\n\n", total);
	
	return 0;
}