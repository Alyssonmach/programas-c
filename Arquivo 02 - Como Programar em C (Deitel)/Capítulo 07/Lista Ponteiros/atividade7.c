//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03 - Introdução a Progamação
//Professor: Roberto Farias
//Lista de Apontadores

//Exercício 7º

#include <stdio.h>
#include <locale.h>

//Função Principal
int main(void)
{
	setlocale(LC_ALL,"");
	char *meses[] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto",
 	 	 	 	 	   "Setembro", "Outubro", "Novembro", "Dezembro"};
    int data, dd, mm, aaaa;
    
    printf("<<<<<PROGAMA QUE MOSTRA DATA POR EXTENSO>>>>>\n\n");
    
    printf("Informe a data no estilo (DDMMAAAA): ");
    scanf("%d", &data);
    
    aaaa = data % 10000;
    data /= 10000;
    mm = data % 100;
    data /= 100;
    dd = data;
	
	printf("\n\nA data digitada por extenso é: ");
	printf("%d de %s de %d\n\n", dd, meses[mm], aaaa);
	
	return 0;
}

//Criado por Alysson Machado