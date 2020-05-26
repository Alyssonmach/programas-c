#include <stdio.h>
#include <locale.h>

#define TAM 99

void media(const int[]);
void mediana(int[]);
void moda(int[], const int[]);
void bolha(int[]);
void imprimeArray(const int[]);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int freq[10] = {0};
	int entrada[TAM] = { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
						 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
						 6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
						 7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
						 6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
						 7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
						 5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
						 7, 8, 9, 6, 8, 7, 8, 9, 7 ,8,
						 7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
						 4, 5, 6, 1, 6, 5, 7, 8, 7};
   
   media(entrada);
   mediana(entrada);
   moda(freq, entrada);
   
	return 0;
}

void media(const int valores[])
{
	int indice, total = 0;
	
	printf("\n\n<<<<<MÉDIA>>>>>\n\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		total += valores[indice];
	}
	
	printf("\n\nO valor médio é: %.4f.\n\n", (double)total / TAM);
	return;
}

void mediana(int valores[])
{
	printf("\n\n<<<<<MEDIANA>>>>>\n\n");
	
	imprimeArray(valores);
	bolha(valores);
	
	printf("\n\nArray ordenado:\n");
	
	imprimeArray(valores);
	
	printf("\n\nA mediana é: %d.\n\n", valores[TAM/2]);
	return;
}

void moda(int freq[], const int valores[])
{
	int taxa, indice, maior = 0, valorModa = 0;
	
	printf("\n\n<<<<<MODA>>>>>\n\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		++freq[valores[indice]];
	}
	
	for(taxa = 1; taxa <= 9; taxa++)
	{
		if(freq[taxa] > maior)
		{
			maior = freq[taxa];
			valorModa = taxa;
		}
	}
	
	printf("\n\nA moda é %d.\n\n", valorModa);
	
	return;
}

void bolha(int vetor[])
{
	int auxiliar, indice1, indice2;
	
	for(indice1 = 0; indice1 <= TAM - 1; indice1++)
		for(indice2 = 0; indice2 <= TAM - 2; indice2++)
			if(vetor[indice2] > vetor[indice2 + 1])
			{
				auxiliar = vetor[indice2];
				vetor[indice2] = vetor[indice2 + 1];
				vetor[indice2 + 1] = auxiliar;
			}
	return;
}

void imprimeArray(const int vetor[])
{
	int indice;
	
	printf("\n\n");
	
	for(indice = 0; indice <= TAM -1; indice++)
	{
		printf("%d ", vetor[indice]);
		
		if(indice % 9 == 0)
			printf("\n");
	}
	
	return;
}