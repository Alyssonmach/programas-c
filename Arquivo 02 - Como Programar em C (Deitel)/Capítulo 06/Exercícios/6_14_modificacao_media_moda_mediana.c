#include <stdio.h>
#include <locale.h>

#define TAM 10

void media(const int[]);
void mediana(int[]);
void moda(int[], const int[]);
void bolha(int[]);
void imprimeArray(const int[]);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int freq[10] = {0};
	int entrada[TAM] = { 1, 1, 2, 2, 5, 6, 7, 8, 9, 10};
   
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
	
	printf("\n\nO valor médio é: %.2f.\n\n", (double)total / TAM);
	return;
}

void mediana(int valores[])
{
	double valorMediana;
	printf("\n\n<<<<<MEDIANA>>>>>\n\n");
	
	imprimeArray(valores);
	bolha(valores);
	
	printf("\n\nArray ordenado:\n");
	
	imprimeArray(valores);
	
	if(TAM % 2 == 0)
	{
		valorMediana = ((double)(valores[(TAM - 1)/2] + (double)valores[(TAM - 1)/2 +1]) / 2);
		printf("\n\nA mediana é: %.2lf.\n\n", valorMediana);
	}
	else
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
	
	for(taxa = 1; taxa <= 9; taxa++)
		if(maior == freq[taxa])
			printf("\nA moda é: %d.\n", taxa);
	
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
		
		if((indice + 1) % 10 == 0)
			printf("\n");
	}
	
	return;
}