#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define VENDEDOR 4
#define PRODUTO 5

void totalProduto(double[], double[], int, int);
void totalVendedor(double[][VENDEDOR], double[], int, int);
void imprimeTabular(double[][VENDEDOR], double[], double[], int, int);

int main(void)
{
	setlocale(LC_ALL,"");
	
	double matriz[PRODUTO][VENDEDOR] = {0}, produto[PRODUTO] = {0}, vendedor[VENDEDOR] = {0}, reais;
	int numVendedor, numProduto, indice;
	
	printf("<<<<<PROGAMA TOTAL DE VENDAS>>>>>\n\n");
	
	do{
		printf("\nInforme o número do vendedor(1 - 4)(0 para parar): ");
		scanf("%d", &numVendedor);
		
		if(numVendedor != 0)
		{
			printf("\nInforme o número do produto(1 - 5): ");
			scanf("%d", &numProduto);
			printf("\nInforme o valor do produto em reais: ");
			scanf("%lf", &reais);
			
			matriz[numProduto][numVendedor] += reais;
		}
		
	}while(numVendedor != 0);
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	for(indice = 1; indice <= PRODUTO; indice++)
		totalProduto(matriz[indice], produto, indice, VENDEDOR);
	
	totalVendedor(matriz, vendedor, PRODUTO, VENDEDOR);
	
	imprimeTabular(matriz, produto, vendedor, PRODUTO, VENDEDOR);
	
	return 0;
}

void totalProduto(double valores[], double soma[], int posicao, int vendedor)
{
	double total = 0;
	int indice;
	
	for(indice = 1; indice <= vendedor; indice++)
		total += valores[indice];
	
	soma[posicao] = total;
	
	return;
}

void totalVendedor(double matriz[][VENDEDOR], double vendedores[], int produto, int vendedor)
{
	int linha, coluna;
	
	for(linha = 1; linha <= produto; linha++)
		for(coluna = 1; coluna <= vendedor; coluna++)
			vendedores[coluna] += matriz[linha][coluna];
	
	return;
}

void imprimeTabular(double matriz[][VENDEDOR], double somProdutos[], double somVendedores[], int produto, int vendedor)
{
	int linha, coluna, indice;
	
	printf("%s%36s\n", "Matriz de Vendas", "Total  por produto");
	for(linha = 1; linha <= produto; linha++)
	{
		for(coluna = 1; coluna <= vendedor; coluna++)
		{
			printf("%8.2lf", matriz[linha][coluna]);
		}
		printf("%9.2lfR$", somProdutos[linha]);
		printf("\n");
	}
	
	printf("\n\nTotal dos vendedores:\n");
	for(indice = 1; indice<= vendedor; indice++)
		printf("%8.2lf", somVendedores[indice]);
	printf("\n\n");
	
	return;
}