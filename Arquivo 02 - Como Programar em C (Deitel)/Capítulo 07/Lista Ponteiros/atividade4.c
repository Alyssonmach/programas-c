//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03 - Introdução a Progamação
//Professor: Roberto Farias
//Lista de Apontadores

//Exercício 4º

#include <stdio.h>
#include <locale.h>

//Constante Simbólica do tamanho máximo de uma string
#define TAM 50

//Protótipo da Função
void concatena(char*, char*, char*);

//Função Principal
int main(void)
{
	setlocale(LC_ALL,"");
	char cadeia1[TAM], cadeia2[TAM], cadeia3[TAM*2 + 1];
	
	printf("<<<<<PROGAMA QUE CONCATENA DUAS CADEIAS DE CARACTERES>>>>>\n\n");
	
	printf("Informe a %s cadeia de caracteres: ", "Primeira");
	gets(cadeia1);
	
	printf("Informe a %s cadeia de caracteres: ", "Segunda");
	gets(cadeia2);
	
	printf("\nA primeira cadeia é: %s", cadeia1);
	printf("\nA segunda cadeia é: %s", cadeia2);
	
	concatena(cadeia1, cadeia2, cadeia3);
	
	printf("\n\nAs cadeias CONCATENADAS são: %s", cadeia3);
	
	printf("\n\n");
	
	return 0;
}

//Função responsável por concatenar duas cadeias de caracteres em uma nova
void concatena(char *string1, char *string2, char *string3)
{
	while(*string1 != '\0')
	{
		*string3 = *string1;
		string3++;
		string1++;
	}
	
	while(*string2 != '\0')
	{
		*string3 = *string2;
		string3++;
		string2++;
	}
	
	*string3 = *string2;
	//Finalizando a cadeia com \0;
	
	return;
}

//Criado por Alysson Machado