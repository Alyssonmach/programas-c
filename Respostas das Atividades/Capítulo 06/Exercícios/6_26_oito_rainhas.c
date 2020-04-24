#include <stdio.h>
#include <locale.h>

#define LADO 8

void preenche_array(int[][LADO], int, int, int);
void imprime_array(int[][LADO], int);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int matriz[LADO][LADO] = {0};
	int linha,coluna;
	
	printf("<<<<<PROGAMA OITO RAINHAS>>>>>\n\n");
	
	for(linha = 0; linha <= LADO - 1; linha++)
		for(coluna = 0; coluna <= LADO - 1; coluna++)
			preenche_array(matriz, linha, coluna, LADO);
		
    imprime_array(matriz, LADO);
	
	return 0;
}

void preenche_array(int matriz[][LADO], int linha, int coluna, int tamanho)
{
	int indice, copia1, copia2;
	
	//Caminha entre linhas para baixo
	for(indice = linha; indice <= tamanho - 1; indice++)
		matriz[linha][coluna] += 1;
	
	//Caminha entre linhas para cima
	for(indice = linha; indice <= 0; indice--)
		matriz[linha][coluna] += 1;
	
	//Caminha entre colunas para direita
	for(indice = coluna; indice <= tamanho - 1; indice++)
		matriz[linha][coluna] += 1;
	
	//Caminha entre colunas para esquerda
	for(indice = coluna; indice <= 0; indice--)
		matriz[linha][coluna] += 1;
	
	copia1 = linha;
	copia2 = coluna;
	
	//Caminha na diagona principal
	if(linha == coluna)
	{
		//Caminho crescente
		while(linha != tamanho - 1 && coluna != tamanho - 1)
		{
			matriz[linha][coluna] += 1;
			copia1++;
			copia2++;
		}
			
		
		copia1 = linha;
		copia2 = coluna;
	
		//Caminho decrescente
		while(linha != 0 && coluna != 0)
		{
			matriz[linha][coluna] += 1;
			copia1--;
			copia2--;
		}
			
	}
	else //Caminha em qualquer outra diagonal;
	{
		
		copia1 = linha;
		copia2 = coluna;
	
		//Diagonal crescente
		while(coluna != tamanho - 1 || linha != tamanho - 1)
		{
			matriz[linha][coluna] += 1;
			copia1++;
			copia2++;
		}
		
		copia1 = linha;
		copia2 = coluna;
	
		//Diagonal decrescente
		while(linha != 0 || coluna != 0)
		{
			matriz[linha][coluna] += 1;
			copia1--;
			copia2++;
		}
		
	}
	
	copia1 = linha;
	copia2 = coluna;
	
	//Caminha na diagonal secundária para cima
	while(linha != 0 || coluna != tamanho - 1)
	{
		matriz[linha][coluna] += 1;
		copia1--;
		copia2++;
	}
	
	copia1 = linha;
	copia2 = coluna;
	
	//Caminha na diagonal secundária para baixo
	while(linha != tamanho - 1 || coluna != 0)
	{
		matriz[linha][coluna] += 1;
		copia1++;
		copia2--;
	}
	
	matriz[linha][coluna] -= 3;
	
	return;
}

void imprime_array(int matriz[][LADO], int tamanho)
{
	int linha, coluna;
	
	for(linha = 0; linha <= tamanho - 1; linha++)
	{
		for(coluna = 0; coluna <= tamanho - 1; coluna++)
			printf("%4d", matriz[linha][coluna]);
		printf("\n");
	}
	
	return;
}