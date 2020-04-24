#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define TAM 36000
#define SOMA 13

void lancaDados(int [], int);
void frequenciaDados(int[], int[], int);

int main(void)
{
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int somaDado[TAM], freqDado[SOMA] = {0};
	int indice, total = 0;
	
	printf("\n\n<<<<<PROGAMA QUE MOSTRA O LANÇAMENTO DE DADOS 36000>>>>>\n\n");
	
	lancaDados(somaDado, TAM);
	frequenciaDados(somaDado, freqDado, TAM);
	
	printf("%s%20s\n", "Elemento", "Valor");
	
	for(indice = 0; indice <= SOMA - 1; indice++)
	{
		printf("%d%25d\n", indice, freqDado[indice]);
		total += freqDado[indice];
	}
	
	printf("\n\nA soma das jogadas é: %d", total);
	
	return 0;
}

void lancaDados(int vetor[], int tamanho)
{
	int dado1, dado2, total;
	int indice;
	
	for(indice = 0; indice <= tamanho - 1; indice++)
	{
		dado1 = rand() % 6 + 1;
		dado2 = rand() % 6 + 1;
		
		total = dado1 + dado2;
		
		vetor[indice] = total;
	}
	
	return;
}

void frequenciaDados(int vetor[], int freq[], int tamanho)
{
	int indice;
	
	for(indice = 0; indice <= tamanho - 1; indice++)
	{
		++freq[vetor[indice]];
	}
	
	return;
}