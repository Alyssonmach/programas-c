#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void imprimeMatriz(int[][8]);

int main(void)
{
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int moveNumber, indice;
	int matriz[8][8] = {0};
	int horizontal[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	int vertical[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
	int currentRow, currentColumn;
	
	for(indice = 1; indice <= 64; indice++)
	{
		moveNumber = rand() % 8 + 0;
		currentRow += vertical[moveNumber];
		currentColumn += horizontal[moveNumber];
		if(matriz[currentRow][currentColumn] == 0)
			matriz[currentRow][currentColumn] = indice;
	}
	
	return 0;
}

void imprimeMatriz(int matriz[][8])
{
	int linha, coluna;
	
	for(linha = 0; linha <= 49; linha++)
	{
		for(coluna = 0; coluna <= 49; coluna++)
			printf("%2d", matriz[linha][coluna]);
		printf("\n");
	}
		
	return;
}