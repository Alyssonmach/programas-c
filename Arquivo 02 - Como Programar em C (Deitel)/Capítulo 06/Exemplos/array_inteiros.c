#include <stdio.h>
#include <locale.h>

#define TAM 20

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[TAM], indice;
	
	printf("\t\t<<<<<PROGAMA QUE MOSTRA UM ARRAY ZERADO>>>>>\n\n");
	
	printf("%s%13s\n", "ELEMENTO", "ARRAY");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("\n%d%20d", indice, vetor[indice] = 2 + (2 * indice));
	}
	
	printf("\n\n");
	
	return 0;
}