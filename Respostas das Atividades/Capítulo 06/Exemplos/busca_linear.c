#include <stdio.h>
#include <locale.h>

#define TAM 5

int busca_linear(int[], int, int);
void preenche_vetor(int[], int);
void bolha(int[], int);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[TAM] = {0}, chave, indice, elemento;
	
	printf("\t\t<<<<<PROGAMA QUE FAZ UMA BUSCA LINEAR NO VETOR>>>>>\n\n");
	
	printf("O vetor em questão é:\n");
	
	preenche_vetor(vetor, TAM);
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%d ", vetor[indice]);
	}
	
	bolha(vetor, TAM);
	
	printf("\n\nO vetor ordenado é:\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%d ", vetor[indice]);
	}
	
	printf("\n\nDigite o valor para ver se ele está no vetor: ");
	scanf("%d", &chave);
	
	elemento = busca_linear(vetor, chave, TAM);
	
	if(elemento != -1)
		printf("\n\nValor encontrado no elemento %d.\n\n", elemento);
	else
		printf("\n\nValor não encontrado.\n\n");
	   	
	return 0;
}

int busca_linear(int vetor[], int valor, int tamanho)
{
	int indice;
	
	for(indice = 0; indice <= tamanho - 1; indice++)
	{
		if(vetor[indice] == valor)
			return indice;
	}
	return -1;
}

void preenche_vetor(int vetor[], int tamanho)
{
	int indice, contador1 = 0, contador2 = 5;
	
	for(indice = 0; indice <= tamanho - 1; indice++)
	{
		contador1++;
		contador2--;
		vetor[indice] = (contador1*contador2 - 7);
	}
	
	return;
}

void bolha(int vetor[], int tamanho)
{
	int indice1, indice2, auxiliar;
	
	for(indice1 = 0; indice1 <= tamanho - 1; indice1++)
		for(indice2 = 0; indice2 <= tamanho - 2; indice2++)
			if(vetor[indice2] > vetor[indice2 + 1])
			{
				auxiliar = vetor[indice2];
				vetor[indice2] = vetor[indice2 + 1];
				vetor[indice2 + 1] = auxiliar;
			}
    return;
}