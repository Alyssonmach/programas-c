// Programa criada por Alysson Machado


/*Importando as bibliotecas padrões da linguagem C*/

// Incluindo a biblioteca stdio.h padrão da linguagem de programação C
#include <stdio.h>
// Incluindo a biblioteca stdlib.h padrão da linguagem de programação C
#include <stdlib.h>
// Incluindo a biblioteca math.h padrão da linguagem de programação C
#include <math.h>
// Incluindo a biblioteca locale.h padrão da linguagem de programação C
#include <locale.h>

/*Definindo o escopo das funções*/

// Função com valor de entrada em Decimal -> Saída em Octal, Binário e Hexadecimal
void decimal(void);
// Função com valor de entrada em Binário -> Saída em Decimal, Octal e Hexadecimal
void binario(void);
// Função com valor de entrada em Hexadecimal -> Saída em Decimal, Binário e Octal
void hexadecimal(void);
// Função com valor de entrada em Octal -> Saída em Decimal, Binário e Hexadecimal
void octal(void);
// Função que converte um número binário em decimal
int binariodecimal(long long int);
// Função que converte um número decimal em binário
long long int decimalbinario(int);

/*Definindo a função main principal*/

// Função main que faz a linkagem com todas as outras funções
int main(void)
{
	// Alterando para a localidade padrão do sistema operacional
	setlocale(LC_ALL,"");

	// Definindo uma variável do tipo inteira
	int opcao;

	// Explicando o funcionamento da função
	printf("Programa que converte de uma base M para uma base N");
	
	// Estrutura de Repetição DO/WHILE responsável por criar um ciclo de repetição no menu com uma flag 0
	do
	{
		
		// Solicitando ao usuário um valor para ser escolhido
		printf("\n\nEscolha um valor de entrada: \n");
		// "opcao" recebe 1 caso o valor de entrada seja em Decimal
		printf("1 - Decimal \n");
		// "opcao" recebe 1 caso o valor de entrada seja em Binário
		printf("2 - Binario \n");
		// "opcao" recebe 1 caso o valor de entrada seja em Hexadecimal
		printf("3 - Hexadecimal \n");
		// "opcao" recebe 1 caso o valor de entrada seja em Octal
		printf("4 - Octal \n");
		// "opcao" recebe 0 que é a flag de parada
		printf("0 - Sair do programa \n");
		// Solicita ao usuário o dado de entrada para a variável "opcao"
		printf("Digite a sua opção: ");
		// Recebe o dado de entrada na variável do tipo inteira "opcao"
		scanf("%d", &opcao);
		
		// Caso a variável "opcao" armazene o valor em inteiro "1"
		if(opcao == 1)
		{
			// Chama a função "decimal", essa do tipo void para entrada e saída
			decimal();
		}
		// Se não se a variável "opcao" armazene o valor em inteiro "2"
		else if(opcao == 2)
		{
			// Chama a função "binario", essa do tipo void para entrada e saída
			binario();
		}
		// Se não se a variável "opcao" armazene o valor em inteiro "3"
		else if(opcao == 3)
		{
			// Chama a função "hexadecimal", essa do tipo void para entrada e saída
			hexadecimal();
		}
		// Se não se a variável "opcao" armazene o valor em inteiro "4"
		else if(opcao == 4)
		{
			// Chama a função "octal", essa do tipo void para entrada e saída
			octal();
		}
		// Se não se a variável "opcao" armazena o valor em inteiro e flag "0" 
		else if(opcao == 0)
		{
			// Mostra uma mensagem ao usuário que o programa foi encerrado
			printf("\nEncerrando o programa! \n\n");
		}
		// Se não a variável "opcao" não possuir nenhum dos valores acima
		else
		{
			// Mensagem de aviso ao usuário que a variável "opcao" recebeu um valor incorreto
			printf("\nDado Incorreto. Por favor digite novamente! \n\n");
		}
		
	// Encerrando a repetição DO/WHILE caso a variável "opcao" receba a flag 0
	}while(opcao != 0); // Fim da estrutura de repetição DO/WHILE
	
	// Retorno 0 indica função concluída com sucesso
	return 0;
} // Fim da função principal ou main

/*Seção com as outras funções auxiliares da função principal ou main*/

// Definindo a função "decimal" referenciada no escopo de funções
void decimal(void)
{
	// Definindo a variável "numdecimal" do tipo inteiro
	int numdecimal;
	
	// Solicitando ao usuário um dado de entrada em decimal para a variável "numdecimal"
	printf("\nInforme um número em decimal: ");
	// Recebe a entrada para a varíavel "numdecimal"
	scanf("%d", &numdecimal);
	
	// Converte um número em decimal para binário
	printf("\nBinario: %lld", decimalbinario(numdecimal));
	// Converte um número em decimal para hexadecimal
	printf("\nHexadecimal: %x", numdecimal);
	// Converte um número em decimal para octal
	printf("\nOctal: %o", numdecimal);
	
	// Função não retorna nenhum valor
	return;
} // Fim da função "decimal"

// Definindo a função "binario" referenciada no escopo de funções
void binario(void)
{
	// Definindo a variável "numbinario" do tipo inteiro com mais bits de armazenamento
	long long int numbinario;
	
	// Solicitando ao usuário um dado de entrada em binário para a variável "numbinario"
	printf("\nInforme um número em binário: ");
	// Recebe a entrada para a varíavel "numbinario"
	scanf("%lld", &numbinario);
	
	// Converte um número em binário para decimal
	printf("\nDecimal: %d", binariodecimal(numbinario));
	// Converte um número em binário para hexadecimal
	printf("\nHexadecimal: %x", binariodecimal(numbinario));
	// Converte um número em binário para octal
	printf("\nOctal: %o", binariodecimal(numbinario));
	
	// Função não retorna nenhum valor
	return;
} // Fim da função "binario"

// Definindo a função "hexadecimal" referenciada no escopo de funções
void hexadecimal(void)
{
	// Definindo a variável "numhexadecimal" do tipo inteiro
	int numhexadecimal;
	
	// Solicitando ao usuário um dado de entrada em hexadecimal para a variável "numhexadecimal"
	printf("\nInforme um número em hexadecimal: ");
	// Recebe a entrada para a varíavel "numhexadecimal"
	scanf("%x", &numhexadecimal);
	
	// Converte um número em hexadecimal para decimal
	printf("\nDecimal: %d", numhexadecimal);
	// Converte um número em hexadecimal para binário
	printf("\nBinario: %lld", decimalbinario(numhexadecimal));
	// Converte um número em hexadecimal para octal
	printf("\nOctal: %o", numhexadecimal);
	
	// Função não retorna nenhum valor
	return;
} // Fim da função "hexadecimal"

// Definindo a função "octal" referenciada no escopo de funções
void octal(void)
{
	// Definindo a variável "numoctal" do tipo inteiro
	int numoctal;
	
	// Solicitando ao usuário um dado de entrada em octal para a variável "numoctal"
	printf("\nInforme um número em octal: ");
	// Recebe a entrada para a varíavel "numoctal"
	scanf("%o", &numoctal);
	
	// Converte um número em octal para decimal
	printf("\nDecimal: %d", numoctal);
	// Converte um número em octal para binário
	printf("\nBinário: %lld", decimalbinario(numoctal));
	// Converte um número em octal para hexadecimal
	printf("\nHexadecimal: %x", numoctal);
	
	// Função não retorna nenhum valor
	return;
} // Fim da função "octal"

// Definindo a função "binariodecimal" referenciada no escopo de funções
int binariodecimal(long long int binario)
{
	// Definindo a variável "decimal" do tipo inteiro que recebe um inteiro 0
	int decimal = 0;
	// Definindo a variável "indice" do tipo inteiro que recebe um inteiro 0
	int indice = 0;
	// Definindo a variável "auxiliar" do tipo inteiro
	int auxiliar;
	
	// Estrutura de repetição WHILE com parada ou flag definida quando a variável "binario" estiver armazenando um dado em inteiro 0
	while(binario != 0)
	{
		// Variável auxiliar recebe o módulo do dado armazenado em "binario" quando ele sofre uma divisão por 10
		auxiliar = binario % 10;
		// Variável "binario" recebe o dado armazenado em "binario" quando ele sofre uma divisão por 10
		binario /= 10;
		// Variável "decimal" recebe o dado armazenado em "decimal" mais variável "auxiliar" vezes o dado armazenado em "indice" elevado ao quadrado
		decimal += auxiliar * pow(2, indice);
		// Variável "indice" é pré-incrementada com o valor inteiro "1"
		++indice;
	} // Fim da estrutura de repetição WHILE
	
	// A função retorna um valor em decimal
	return decimal;
} // Fim da função "binariodecimal"

// Definindo a função "decimalbinario" referenciada no escopo de funções
long long int decimalbinario(int decimal)
{
	// Definindo a variável "binario" do tipo inteiro com mais bits que recebe um valor inteiro 0
	long long int binario = 0;
	// Definindo a variável "auxiliar" do tipo inteiro
	int auxiliar;
	// Definindo a variável "indice" do tipo inteiro que recebe um valor inteiro 1
	int indice = 1;
	
	// Estrutura de repetição WHILE com parada ou flag quando a variável "decimal" estiver armazenando um dado inteiro 0
	while(decimal != 0)
	{
		// Variável "auxiliar" recebe o módulo da variável "decimal" quando ele sofre uma divisão por 2
		auxiliar = decimal % 2;
		// Variável "decimal" recebe a variável "decimal" quando ele sofre uma divisão por 2
		decimal /= 2;
		// Variável "binario" recebe variável "binário" mais variável "auxiliar" vezes variável "indice"
		binario += auxiliar * indice;
		// Variável "indice" recebe variável "indice" vezes o dado inteiro 10
		indice *=10;
	} // Fim da estrutura de repetição WHILE
	
	// A função retorna um valor em binário
	return binario;	
} // Fim da função "decimalbinario"



// Programa criada por Alysson Machado
