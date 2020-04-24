#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[5] = {0}, indice;
	
	printf("\t\t<<<<<PROGAMA QUE MOSTRA UM ARRAY ZERADO>>>>>\n\n");
	
	printf("%s%13s\n", "ELEMENTO", "ARRAY");
	
	for(indice = 0; indice <= 4; indice++)
	{
		printf("\n%d%20d", indice, vetor[indice]);
	}
	
	printf("\n\n");
	
	return 0;
}