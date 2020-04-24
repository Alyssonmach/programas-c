//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matrícula: 119110236
//Turma 03 - Introdução a Progamação
//Professor: Roberto Farias
//Lista de Apontadores

//Exercício 8º

#include <stdio.h>
#include <locale.h>

//Função Principal
int main(void)
{
	setlocale(LC_ALL,"");
	char *unidade[10] = {"","Primeiro", "Segundo", "Terceiro", "Quarto", "Quinto", "Sexto", 
 	 	 	 	 	 	 "Sétimo", "Oitavo", "Nono"};
    char *dezena[10] = {"","Décimo", "Vigésimo", "Trigésimo", "Quadragésimo", "Quinquagésimo",
						"Sexagésimo","Septuagésimo", "Octagésimo", "Nonagésimo"};
    char *centesimo[10] = {"", "Centésimo", "Ducentésimo", "Trecentésimo", "Quadringencentésimo",
                           "Quingentésimo","Sexcentésimo", "Sentigentésimo","Octingentésimo",
						   "Nongentésimo"};
    int numero, uni, dez, cent;
    
    printf("<<<<<Progama Números Ordinais>>>>>\n\n");
    
    printf("Informe um valor em números: ");
    scanf("%d", &numero);
    
    printf("\n\nA versão em ordinal é: ");
    
    if(numero == 1000)
    	printf("Milésimo\n\n");
    else
	{
		uni = numero % 10;
		dez = (numero % 100) / 10;
		cent = numero / 100;
		
		printf("%s %s %s\n\n", centesimo[cent], dezena[dez], unidade[uni]);
	}
    
	return 0;
}

//Criado por Alysson Machado