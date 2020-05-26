#include <stdio.h>
#include <locale.h>

#define TAM 20

int verifica(int[], int);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[TAM], indice = 0, numero, contador = 0;
	
	printf("\t\t<<<<<PROGAMA ELIMINAÇAÕ DE DUPLICATAS>>>>>\n\n");
	
	printf("Preencha o vetor com 20 números entre 10 e 100:\n");
	
	do
	{
		
		printf("\nInsira um número: ");
		scanf("%d", &numero);
		
		if(numero < 10 || numero > 100)
			printf("\nEntrada inválida, tente novamente!\n\n");
		else
		{
			if(verifica(vetor, numero) == 1)
				printf("\n%d já existe no vetor!\n", numero);
			else
			{
				vetor[indice] = numero;
				indice++;
				contador++;
			}
			
		}
		
	}while(contador < TAM);
	
	printf("\n\nO vetor digitado é:\n");
	for(indice = 0; indice <= TAM -1; indice++)
	{
		printf("%5d", vetor[indice]);
	}
	
	return 0;
}

int verifica(int vetor[], int numero)
{
	int indice;
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		if(vetor[indice] == numero)
			return 1;
	}
	return 0;
}