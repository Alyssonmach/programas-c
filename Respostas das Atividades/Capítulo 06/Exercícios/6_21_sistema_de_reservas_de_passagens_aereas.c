#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

void imprimeArray( const int[], int);
void escolheCadeira( int[], int);
int verificaCadeira(const int[], int);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[TAM] = {0};
	int opcao;
	
	printf("\t\t<<<<<SISTEM AÉREO FEDERAL AIRLINE>>>>>\n\n");
	
	do 
	{
		
	do 
	{
		
	printf("Por favor, escolha qual classe você deseja: ");
	printf("\n1 - Primeira Classe");
	printf("\n2 - Classe Econômica");
	printf("\n\tOpção: ");
	scanf("%d", &opcao);
	
	if(opcao != 1 && opcao != 2)
	{
		printf("\n\nOpção inválida! Tente novamente.\n\n");
		system("pause");
		system("cls");
	}
	else
	{
		printf("\n\n");
		system("pause");
		system("cls");
	}
		
	
	} while(opcao != 1 && opcao != 2);
		
	imprimeArray(vetor, opcao);
	escolheCadeira(vetor, opcao);
	
	if(verificaCadeira(vetor,1) == 1 && verificaCadeira(vetor, 2) == 1)
	{
		printf("\n\nNão há mais vagas! Espere outro avião.\n\n");
	}
	else if(verificaCadeira(vetor,opcao) == 1)
	{
		do
		{
			
		printf("\n\nA classe que você escolheu está cheia, deseja trocá-la?\n\n");
		printf("\n3 - Sim");
		printf("\n4 - Não");
		printf("\n\t Opção: ");
		scanf("%d", &opcao);
		
		if(opcao != 3 && opcao != 4)
		{
			printf("\n\nEntrada Inválida! Tente novamente.\n\n");
			system("pause");
			system("cls");
		}
		else
		{
			printf("\n\n");
			system("pause");
			system("cls");
		}
			
		
		}while(opcao != 3 && opcao != 4);
	}
	
	} while(verificaCadeira(vetor,opcao) == 0 || opcao == 3);
	
	return 0;
}

void imprimeArray(const int array[], int escolha)
{
	int indice, cadeiras;
	
	if(escolha == 1)
	{
		printf("\n\nDisponibilidade de cadeiras para a %s:\n", "Primeira Classe");
		printf("Cadeiras:\t");
		
		for(cadeiras = 1; cadeiras <= 5; cadeiras++)
			printf("%4d", cadeiras);
		
		printf("\n        \t");
		
		for(indice = 0; indice <= 4; indice++)
			printf("%4d", array[indice]);
		
		printf("\n\n");
	}
	else if(escolha == 2)
	{
		printf("\n\nDisponibilidade de cadeiras para a %s:\n", "Classe Econômica");
		printf("Cadeiras:\t");
		
		for(cadeiras = 6; cadeiras <= 10; cadeiras++)
			printf("%4d", cadeiras);
		
		printf("\n        \t");
		
		for(indice = 5; indice <= 9; indice++)
			printf("%4d", array[indice]);
		
		printf("\n\n");
	}
	
	return;
}

void escolheCadeira( int array[], int escolha)
{
	int indice, cadeira;
	
	if(escolha == 1)
	{
		for(indice = 0; indice <= 4; indice++)
		{
			if(array[indice] == 0)
			{
				array[indice] = 1;
				cadeira = indice + 1;
				break;
			}
		}
	}
	else if(escolha == 2)
		
		for(indice = 5; indice <= 9; indice++)
		{
			if(array[indice] == 0)
			{
				array[indice] = 1;
				cadeira = indice + 1;
				break;
			}
		}
		
		if(verificaCadeira(array, escolha) == 0)
    		printf("\n\nVocê ficou com o assento Nº %d.\n\n", cadeira);
    
    system("pause");
    system("cls");
    
    imprimeArray(array, escolha);
    
    system("pause");
    system("cls");
	
	return;
}

int verificaCadeira(const int array[], int escolha)
{
	int indice;
	
	if(escolha == 1)
	{
		for(indice = 0; indice <= 4; indice++)
		{
			if(array[indice] == 0)
				return 0;
		}
		
    	return 1;
	}
	else 
	{
		for(indice = 5; indice <= 9; indice++)
		{
			if(array[indice] == 0)
				return 0;
		}
		
    	return 1;
	}
	
}