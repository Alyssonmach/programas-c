//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03 - Introdução a Progamação
//Professor: Roberto Farias
//Lista de Apontadores

//Exercício 1º

#include <stdio.h>
#include <locale.h>

#define TAM 20

//Protótipo das Funções
void copia(int*, int, int*);
void mostra_array(int*, int);

//Função Principal
int main(void)
{
	setlocale(LC_ALL,"");
	
	int array1[TAM] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1}; 
	int array2[TAM];
	
	printf("<<<<<PROGAMA QUE PASSA UM ARRAY PARA OUTRO>>>>>\n\n");
	
	printf("O primeiro array é:\n");
	mostra_array(array1, TAM);
	
	copia(array1, TAM, array2);
	
	printf("\n\nO segundo agora é array é:\n");
	
	mostra_array(array2, TAM);
	
	printf("\n\n");
	
	return 0;
}

//Função responsável por passar o conteúdo de um array para o outro
void copia(int *array1, int tamanho, int *array2)
{
	int *arrayPtr;
	
	for(arrayPtr = array1; arrayPtr <= array1 + tamanho - 1; arrayPtr++)
	{
		*array2 = *arrayPtr;
		array2++;
	}
	
	return;
}

//Função responsável por imprimir o conteúdo do array na tela
void mostra_array(int *array, int tamanho)
{
	int *arrayPtr;
	
	for(arrayPtr = array; arrayPtr <= array + tamanho - 1; arrayPtr++)
		printf("%2d ", *arrayPtr);
	
return;
}

//Criado por Alysson Machado