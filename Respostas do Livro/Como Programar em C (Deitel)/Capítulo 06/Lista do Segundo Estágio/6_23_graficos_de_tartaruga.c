//Lista 6.1 - Funções e Arrays
//Questão 6.23
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 50

void menu(void);
void imprimeArray(int[][TAM]);
void moveTartaruga(int[][TAM], float, float, float, int *linha, int *coluna);

int main(void)
{
	setlocale(LC_ALL,"");
	int matriz[TAM][TAM] = {0};
	float comando, escreve = 0, direcao = 6, percorre = 0;
	int j = 0, k = 0, *linha = &j, *coluna = &k;
	
	do
	{
		
		menu();
		
		printf("\nInforme um comando: ");
		scanf("%f", &comando);
		
		printf("\n\n");
		
		system("pause");
        system("cls");
		
		if(comando == 1)
		escreve = 0;
	else if(comando == 2)
		escreve = 1;
	else if(comando == 3)
		direcao = 3;
	else if(comando == 4)
		direcao = 4;
	else if(comando == 5)
		direcao = 5;
	else if(comando == 6)
		direcao = 6;
	else if(comando >= 7.00 && comando <= 7.50)
	{
		percorre = (comando - (int)comando) *100;
	}
	else if(comando == 8)
		imprimeArray(matriz);
	else if(comando == 9)
		printf("\nProgama Finalizado\n");
	else
		printf("\nEntrada Inválida!\n");
	
	moveTartaruga(matriz, escreve, direcao, percorre, linha, coluna);
	
	percorre = 0;
	
	}while(comando != 9);
	
	return 0;
}

void menu(void)
{
	printf("<<<<<PROGAMA GRÁFICOS DE TARTARUGA>>>>>\n\n");
	
	printf("Insira os comandos abaixo para prosseguir com o jogo.\n\n");
	printf("Menu:\n");
	printf("1 - Caneta para cima\n2 - Caneta para baixo\n3 - Virar para o sul\n"
           "4 - Virar para o oeste\n5 - Virar para o norte\n6 - Virar para o leste\n"
		   "7,NN - Move a tartaruga NN casas(dois algarismos após a vírgula)\n"
		   "8 - Imprime array\n9 - Sair do jogo\n\n");
		   
	return;
}

void imprimeArray(int matriz[][TAM])
{
	int linha, coluna;
	
	for(linha = 0; linha <= TAM - 1; linha++)
	{
		for(coluna = 0; coluna <= TAM - 1; coluna++)
			printf("%d", matriz[linha][coluna]);
		printf("\n");
	}
	
	printf("\n\n");
	
	system("pause");
	system("cls");
	
	return;
}
void moveTartaruga(int matriz[][TAM],float  escreve, float direcao, float percorre, int *linha, int *coluna)
{
	int j, k, copia;
	
	if(direcao == 3 && percorre != 0)
	{
		copia = *linha;
		
		for(j = *linha; j <= (int)percorre + copia; j++)
		{
			if(escreve == 1)
			{
				matriz[j][*coluna] = 1;
				(*linha)++;
			}
			else
				(*linha)++;
			
		}
			
		(*linha)--;	
	}
	
	if(direcao == 5 && percorre != 0)
	{
		copia = *linha;
		
		for(j = *linha; j >= (int)percorre - copia; j--)
		{
			if(escreve == 1)
			{
				matriz[j][*coluna] = 1;
				(*linha)--;
			}
			else
				(*linha)--;
			
		}
			
		(*linha)++;	
	}
	
	if(direcao == 6 && percorre != 0)
	{
		copia = *coluna;
		
		for(k = *coluna; k <= (int)percorre + copia; k++)
		{
			if(escreve == 1)
			{
				matriz[*linha][k] = 1;
				(*coluna)++;
			}
			else
				(*coluna)++;
		}
		
		(*coluna)--;
	}
	
	if(direcao == 4 && percorre != 0)
	{
		copia = *coluna;
		
		for(k = *coluna; k >= (int)percorre - copia; k--)
		{
			if(escreve == 1)
			{
				matriz[*linha][k] = 1;
				(*coluna)--;
			}
			else
				(*coluna)--;
		}
		
		(*coluna)++;
	}
	
	return;
}

//Criado por Alysson Machado