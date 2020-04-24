//Lista 6.1 - Funções e Arrays
//Questão 6.28
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03

#include <stdio.h>
#include <locale.h>

#define TAM 20

//Protótipo da função
int pesquisaBinaria(int[], int, int);

//Função principal
int main(void)
{
	setlocale(LC_ALL,"");
	int vetor[20] = {0}, contador = 0, valor, indice;
	
	printf("<<<<<PROGAMA ELIMINAÇÃO DE DUPLICATAS>>>>>\n\n");
	
	do
	{
		printf("Informe um valor de 1 - 20: ");
		scanf("%d", &valor);
		
		if(pesquisaBinaria(vetor, valor, TAM) == 0)
		{
			vetor[contador] = valor;
			contador++;
		}
		else
			printf("\nValor já digitado, tente outro!\n");
		
	}while(contador != 20);
	
	for(indice = 0; indice <= TAM - 1;indice++)
		printf("%d ",vetor[indice]);
	
	return 0;
}

//Função que pesquisa, linearmente, se o número digitado já está no vetor
int pesquisaBinaria(int vetor[], int chave, int tamanho)
{
	int indice;
	
	for(indice = 0; indice <= tamanho - 1; indice++)
	{
		if(vetor[indice] == chave)
			return 1; //Indica que o valor já foi digitado
	}
	
	return 0; //Indica que o valor não existe no vetor
}

//Criado por Alysson Machado