#include <stdio.h>
#include <locale.h>

#define TAM 90

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[TAM], indice, total = 0;
	
	printf("\t\t<<<<<PROGAMA QUE MOSTRA UM ARRAY ZERADO>>>>>\n\n");
	
	printf("%s%13s\n", "ELEMENTO", "ARRAY");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("\n%d%20d", indice, vetor[indice] = 2 + (2 * indice));
	}
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		total += vetor[indice];
	}
	
	printf("\n Soma  = %d.\n\n", total);
	
	return 0;
}