/*Calculadora de juros*/

//DECLARE AS VARIÁVEIS COMO NÚMERO FLUTUANTE juros, principal, taxa, dias;
//IMPRIMA NA TELA A STRING "Informe o valor principal do empréstimo (-1 para terminar): ";
//RECEBA DO USUÁRIO O VALOR DA VARIÁVEL principal;
//
//ENQUANTO A VARIÁVEL principal FOR DIFERENTE DE -1;
//
//  IMPRIMA NA TELA A STRING "\nInforme a taxa de juros: ";
//  RECEBA DO USUÁRIO O VALOR DA VARIÁVEL taxa;
//  IMPRIMA NA TELA A STRING "\nInforme o prazo do empréstimo em dias: ";
//  RECEBA DO USUÁRIO O VALOR DA VARIÁVEL dias;
//  ATRIBUA A VARIAVEL juros A MULTIPLICAÇÃO DA VARIÁVEL principal COM taxa E dias, DIVIDINDO-AS POR 365;
//  IMPRIMA NA TELA A STRING "\nO valor dos juros é: %.2f reais.\n\n", MOSTRANDO JUNTAMENTE A ELA O VALOR DA VARIÁVEL juros;
//  IMPRIMA NA TELA A STRING "Informe o valor principal do empréstimo (-1 para terminar): ";
//  RECEBA DO USUÁRIO O VALOR DA VARIÁVEL principal;
//  SE O USUÁRIO ATRIBUIR -1 A VARIÁVEL principal, FIM DA ESTRUTURA DE REPETIÇÃO;
//
//FIM DO PROGAMA/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float juros, principal, taxa, dias;
    setlocale(LC_ALL,"");

    printf("Informe o valor principal do empréstimo (-1 para terminar): ");
    scanf("%f", &principal);

    while(principal != -1) {

        printf("\nInforme a taxa de juros: ");
        scanf("%f", &taxa);
        printf("\nInforme o prazo do empréstimo em dias: ");
        scanf("%f", &dias);

        juros = principal * taxa * dias/365;

        printf("\nO valor dos juros é: %.2f reais.\n\n", juros);

        printf("Informe o valor principal do empréstimo (-1 para terminar): ");
        scanf("%f", &principal);

    }

    return 0;
}
