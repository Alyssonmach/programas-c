//Lista 6.1 - Funções e Arrays
//Questão 6.30
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 999

int main(void)
{
	setlocale(LC_ALL,"");
	
	int primos[TAM];
	int indice1, indice2;
	
	printf("<<<<<PROGAMA NÚMEROS PRIMOS>>>>>\n");
	
	for(indice1 = 0; indice1 <= TAM - 1; indice1++)
		primos[indice1] = 1;
	
	for(indice1 = 2; indice1 <= TAM - 1; indice1++)
	{
		for(indice2 = indice1 + 1; indice2 <= TAM - 1; indice2++)
			if(indice2 % indice1 == 0)
				primos[indice2] = 0;
	}
	
	printf("\n\nNúmeros primos:\n");
	for(indice1 = 2; indice1 <= TAM - 1; indice1++)
		if(primos[indice1] == 1)
			printf("%d\n", indice1);
		
		return 0;
}

//Criado por Alysson Machado