//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03 - Introdução a Progamação
//Professor: Roberto Farias
//Lista de Apontadores

//Exercício 6º

#include <stdio.h>
#include <locale.h>

//Protótipo das Funções
void converteminuscula(char *);
void conta_letras(char *, int *);

//Função Principal
int main(void)
{
	setlocale(LC_ALL,"");
	int letras[26] = {0};
	char string[250];
	int indice;
	
	printf("<<<<<PROGAMA QUE CONTA A OCORRÊNCIA DE LETRAS>>>>>\n\n");
	
	printf("Informe uma cadeia de caracteres(Máximo 250):\n");
	gets(string);
	
	converteminuscula(string);
	conta_letras(string,letras);
	
	for(indice = 0; indice <= 26 - 1; indice++)
	{
		printf("%c = %d\n", indice + 97, letras[indice]);
		
	}
	
	
	return 0;
}

//Função responsável por converter as letras em minúsculas para facilitar a contagem
void converteminuscula(char *caracteres)
{
	while(*caracteres != '\0')
	{
		if(*caracteres >= 'A' && *caracteres <= 'Z')
			(*caracteres) += 32;
		caracteres++;
	}
	return;
}

//Função responsável por contar a frequência das letras
void conta_letras(char *caracteres, int *frequencia)
{
	int auxiliar;
	
	while(*caracteres != '\0')
	{
		auxiliar = *caracteres;
		frequencia[auxiliar - 97]++;
		caracteres++;
	}
	
	return;
}

//Criado por Alysson Machado