#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10
#define DADOS 9

void calculaSalario(double[]);
void tesouraria(double[], int[]);

int main(void)
{
	setlocale(LC_ALL,"");
	
	double salario[TAM];
	int frequencia[DADOS] = {0}, indice;
	
	printf("\t\t<<<<<PROGAMA QUE CALCULA COMISSÕES DE VENDAS>>>>>\n\n");
	
	printf("\nInforme quanto cada um dos 10 trabalhadores venderam por mês em R$:\n");
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("\n%dº Trabalhador: ", indice + 1);
		scanf("%lf", &salario[indice]);
	}
	
	printf("\n\nO valor a ser recebido é: ");
	
	calculaSalario(salario);
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		printf("\n%d° trabalhador: %.2lf R$", indice + 1, salario[indice]);
	}
	
	tesouraria(salario, frequencia);
	
	printf("\n\nA relação de trabalhadores por recebimento é:\n");
	
	printf("\nR$ 200 - 299: %d trabalhadores.", frequencia[0]);
	printf("\nR$ 300 - 399: %d trabalhadores.", frequencia[1]);
	printf("\nR$ 400 - 499: %d trabalhadores.", frequencia[2]);
	printf("\nR$ 500 - 599: %d trabalhadores.", frequencia[3]);
	printf("\nR$ 600 - 699: %d trabalhadores.", frequencia[4]);
	printf("\nR$ 700 - 799: %d trabalhadores.", frequencia[5]);
	printf("\nR$ 800 - 899: %d trabalhadores.", frequencia[6]);
	printf("\nR$ 900 - 999: %d trabalhadores.", frequencia[7]);
	printf("\nR$ 1000 ou mais: %d trabalhadores.", frequencia[8]);
	
	printf("\n\n");
	
	return 0;
}

void calculaSalario(double vetor[])
{
	int indice;
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		vetor[indice] = ((vetor[indice]*0.09) + 200);
	}
	return;
}

void tesouraria(double pagamento[], int quantidade[])
{
	int indice;
	
	for(indice = 0; indice <= TAM - 1; indice++)
	{
		if(pagamento[indice] >= 200 && pagamento[indice] <= 299)
			++quantidade[0];
		else if(pagamento[indice] >= 300 && pagamento[indice] <= 399)
			++quantidade[1];
		else if(pagamento[indice] >= 400 && pagamento[indice] <= 499)
			++quantidade[2];
		else if(pagamento[indice] >= 500 && pagamento[indice] <= 599)
			++quantidade[3];
		else if(pagamento[indice] >= 600 && pagamento[indice] <= 699)
			++quantidade[4];
		else if(pagamento[indice] >= 700 && pagamento[indice] <= 799)
			++quantidade[5];
		else if(pagamento[indice] >= 800 && pagamento[indice] <= 899)
			++quantidade[6];
		else if(pagamento[indice] >= 900 && pagamento[indice] <= 999)
			++quantidade[7];
		else
			++quantidade[8];
	}
	return;
}