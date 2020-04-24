//Lista 6.1 - Funções e Arrays
//Questão 6.24
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03

#include<stdio.h>
#include <locale.h>

#define TAM 8

//Protótipo das Funções
void imprimeTabuleiro(int[][TAM], int);
int andaCavalo(int[][TAM], int[], int[], int, int, int, int);

//Função principal
int main(void) 
{
	setlocale(LC_ALL,"");
	
    int tabuleiro[TAM][TAM];
    int moveX[8] = {2, 1, -1, -2, -2, -1,  1,  2};
    int moveY[8] = {1, 2,  2,  1, -1, -2, -2, -1};
    int linha, coluna;
    
    printf("<<<<<PROGAMA PASSEIO DE CAVALO>>>>>\n\n");
    
    printf("\nO tabuleiro em que o cavalo pode anda é dado por:\n\n");
    
    for (linha = 0; linha <= TAM - 1; linha++)
        for (coluna = 0; coluna <= TAM - 1; coluna++)
            tabuleiro[linha][coluna] = 0;
        
        tabuleiro[0][0] = 1;
        
        if (andaCavalo(tabuleiro, moveX, moveY, TAM, 0, 0, 1))
            imprimeTabuleiro(tabuleiro, TAM);
        else
            printf("Solução não encontrada!.\n");
        
        return 0;
}

//Função que imprime o tabuleiro na tela
void imprimeTabuleiro(int matriz[][TAM], int tamanho) 
{
    int linha, coluna;
    
    for (linha = 0; linha <= tamanho - 1; linha++) {
    	
        for (coluna = 0; coluna <= tamanho - 1; coluna++)
            printf(" %3d ", matriz[linha][coluna]);
        printf("\n");
        
    }   
    
    return;
}

//Função que anda com o cavalo pelo tabuleiro
int andaCavalo(int tabuleiro[][TAM], int moveX[], int moveY[], int tamanho, int x, int y, int posicao) 
{
    int indice, proximoX, proximoY;
    
    if (posicao == tamanho * tamanho) 
		return 1;
	
    for (indice = 0; indice <= tamanho - 1; indice++) {
        proximoX = x + moveX[indice];
        proximoY = y + moveY[indice];

        if (proximoX >= 0 && proximoX <= (tamanho - 1) && proximoY >= 0 && proximoY <= (tamanho - 1) && tabuleiro[proximoX][proximoY] == 0) 
		{
            tabuleiro[proximoX][proximoY] = posicao + 1;
            
        if (andaCavalo(tabuleiro, moveX, moveY, tamanho, proximoX, proximoY, posicao + 1))
            return 1;
        else
            tabuleiro[proximoX][proximoY] = 0;
        }
    }
    
    return 0;
}

//Criado por Alysson Machado