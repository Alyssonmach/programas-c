#include <stdio.h>
#include <locale.h>

void staticArray(void);
void automaticStaticArray(void);


int main(void)
{
	setlocale(LC_ALL,"");
	
	printf("Primeira chamada dos vetores:\n");
	staticArray();
	automaticStaticArray();
	
	printf("\n\nSegunda chamada dos vetores: \n");
	staticArray();
	automaticStaticArray();
	
	return 0;
}

void staticArray(void)
{
	static int vetor[3] = {0}, indice;
	
	printf("\nNa função staticArray:\n");
	for(indice = 0; indice <= 2; indice++)
	{
		printf("vetor[%d] = %d  ", indice, vetor[indice]);
	}
	
	printf("\nNa função staticArray:\n");
	for(indice = 0; indice <= 2; indice++)
	{
		printf("vetor[%d] = %d  ", indice, vetor[indice] += 5);
	}
	return;
}
void automaticStaticArray(void)
{
	int vetor[] = {1,2,3}, indice;
	
	printf("\nNa função automaticStaticArray:\n");
	for(indice = 0; indice <= 2; indice++)
	{
		printf("vetor[%d] = %d  ", indice, vetor[indice]);
	}
	
	printf("\nNa função automaticStaticArray:\n");
	for(indice = 0; indice <= 2; indice++)
	{
		printf("vetor[%d] = %d  ", indice, vetor[indice] += 5);
	}
}