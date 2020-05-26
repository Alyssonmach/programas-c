#include <stdio.h>
#include <locale.h>

#define TAM 3

void modifica_array(const int[]);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[TAM] = {1, 2, 3}, indice;
	
	printf("\t\t<<<<<PROGAMA QUE MOSTRA A IMPORTÂNCIA DO CONST>>>>>\n\n");
	
	printf("O vetor digitado é: ");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%d ", vetor[indice]);
	}
	
	modifica_array(vetor);
	
	printf("O vetor agora é: ");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%d ", vetor[indice]);
	}
	
	return 0;
}

void modifica_array(const int vetor[])
{
	int indice;
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		vetor[indice] *= 3;
	}
	
	return;
}