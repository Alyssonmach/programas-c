#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[] = {10, 20, 30, 40};
	int *vetorPtr;
	int indice;
	
	vetorPtr = &vetor;
	
	for(indice = 0; indice <= 3; indice++)
		printf("[%d] == %d\n", indice, vetor[indice]);
	
	printf("\n\n");

	for(indice = 0; indice <= 3; indice++)
		printf("*(vetor + %d) == %d\n", indice, *(vetor + indice));	
	
	printf("\n\n");
	
	for(indice = 0; indice <= 3; indice++)
		printf("vetorPtr[%d] == %d\n", indice, vetorPtr[indice]);
	
	printf("\n\n");

	for(indice = 0; indice <= 3; indice++)
		printf("*(vetorPtr + %d) == %d\n", indice, *(vetorPtr + indice));	
	
	return 0;
}