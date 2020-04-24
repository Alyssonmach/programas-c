#include <stdio.h>
#include <locale.h>

#define TAM 10

void bolha(int[], int);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8  ,9 ,10};
	int indice;
	
	printf("\t\t<<<<<BUBBLE SORT MELHORADO>>>>>\n\n");
	
	printf("Array desordenado:\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%3d", vetor[indice]);
	}
	
	printf("\n\nArray ordenado:\n");
	
	bolha(vetor, TAM);
	
	printf("Array ordenado:\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("%3d", vetor[indice]);
	}
	
	return 0;
}

void bolha(int vetor[], int tamanho)
{
	int indice1, indice2, auxiliar, contador;
	
	for(indice1 = 0; indice1 <= tamanho - 1; indice1++) {
		contador = 0;
		for(indice2 = 0; indice2 <= tamanho - 2 - indice1; indice2++)
			if(vetor[indice2] > vetor[indice2 + 1])
			{
				auxiliar = vetor[indice2];
				vetor[indice2] = vetor[indice2 + 1];
				vetor[indice2 + 1] = auxiliar;
				contador++;
			}
			else if(!contador)
				return;
	}			
    return;
}


/*
void bolha(int vetor[], int tamanho) {
	
    int repete, indice, houve_troca, auxiliar;

    for (repete = 0; repete <= tamanho - 1; repete++) {
        houve_troca = 0;
        for (indice = 0; indice <= tamanho - 2 - repete; indice++) {
            if (vetor[indice] > vetor[indice + 1]) {
                auxiliar = vetor[indice];
                vetor[indice] = vetor[indice + 1];
                vetor[indice + 1] = auxiliar;
                houve_troca = 1;
           }
           if (!houve_troca) // não houve troca
                return;
        }
    }
    return;
}
*/