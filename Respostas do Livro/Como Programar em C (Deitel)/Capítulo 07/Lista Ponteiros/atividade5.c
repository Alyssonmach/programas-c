//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03 - Introdução a Progamação
//Professor: Roberto Farias
//Lista de Apontadores

//Exercício 5º

#include <stdio.h>
#include <locale.h>

#define TAM 50

//Protótipo da Função
int contemcadeia(char *, char *);

//Função principal
int main(void)
{
	setlocale(LC_ALL,"");
	char string1[TAM], string2[TAM];
	
	printf("<<<<<PROGAMA QUE VERIFICA SE A SEGUNDA CADEIA ESTÁ CONTIDA NA PRIMEIRA>>>>>\n\n");
	
	printf("Informe a %s cadeia: ", "Primeira");
	gets(string1);
	
	printf("Informe a %s cadeia: ", "Segunda");
	gets(string2);
	
	if(contemcadeia(string1,string2))
		printf("\nA primeria cadeia contém a segunda.\n\n");
	else
		printf("A primeria cadeia não contém a segunda.\n\n");
	
	return 0;
}

//Função responsável por verificar se a segunda cadeia está contida na primeira
int contemcadeia(char *cadeia1, char *cadeia2)
{
	char *ap1, *ap2;
	
	ap1 = cadeia1;
	
	while(*ap1 != '\0')
	{
		ap2 = cadeia2;
		while(*ap1 == *ap2 && *ap1 != '\0' && *ap2 != '\0')
		{
			ap1++;
			ap2++;
		}
		if(*ap2 == '\0')
			return 1;
		++cadeia1;
		ap1 = cadeia1;
	}
	
	return 0;
}

//Criado por Alysson Machado