#include <stdio.h>
#include <locale.h>

#define TAM 5

void modifica_array(int[]);
int modifica_elemento(int);

int main (void)
{
	setlocale(LC_ALL,"");
	
	int vetor[TAM], indice;
	
	printf("\t\t<<<<<PROGAMA QUE PASSA UM ELEMENTO PARA O ARRAY>>>>>\n\n");
	
	printf("Digite os 5 valores do vetor: ");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("\n%dº Termo: ", indice + 1);
		scanf("%d", &vetor[indice]);
	}
	
	modifica_array(vetor);
	
	printf("O vetor modificado é:\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%d ", vetor[indice]);
	}
	
	modifica_elemento(vetor[3]);
	
	printf("\n\nElemento na main: %d.\n\n", vetor[3]);
	
	return 0;
}

void modifica_array(int vetor[])
{
	int indice;
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		vetor[indice] += 2;
	}
	
	return;
}
int modifica_elemento(int valor)
{
	printf("\no elemento agora vale %d.\n", valor += 2);
	
	return valor;
}