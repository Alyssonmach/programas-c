/*Calculadora de salário*/

//DECLARE AS VARIÁVEIS TIPO NÚMERO FLUTUANTE hora, preco_hora, salario;
//IMPRIMA NA TELA A STRING "Digite o quanto o trabalhador tem de horas acumuladas (-1 para terminar): ";
//RECEBA DO USUÁRIO O VALOR DA VARIÁVEL hora;
//
//ENQUANTO HORA FOR DIFERENTE DE -1 FAÇA:
//  IMPRIMA NA TELA A STRING "\nDigite o salário por hora do funcionário: ";
//  RECEBA DO USUÁRIO O VALOR DA VARIÁVEL preco_hora;
//  SE A VARIÁVEL hora FOR MENOR OU IGUALA 40;
//      FAÇA A SEGUINTE ATRIBUIÇÃO DE VARIÁVEIS: salario = hora * preco_hora;
//  SE NÃO
//      FAÇA SEGUINTE ATRIBUIÇÃO DE VARIÁVEIS: salario = 40 * preco_hora + ( (hora-40) * (preco_hora + preco_hora*0.5) );
//  IMPRIMA NA TELA A STRING "\nSalário é de %.2f reais.\n\n", MOSTRANDO O VALOR DA VARIÁVEL salario;
//  IMPRIMA NA TELA A STRING "Digite o quanto o trabalhador tem de horas acumuladas (-1 para terminar): ";
//  RECEBA DO USUÁRIO O VALOR DA VARIÁVEL hora;
//  CASO O VALOR ATRIBUIDO A VARIÁVEL hora SEJA -1, ENCERRA A ESTRUTURA DE REPETIÇÃO;
//
//FIM DO PROGAMA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float hora, preco_hora, salario;
    setlocale(LC_ALL,"");

    printf("Digite o quanto o trabalhador tem de horas acumuladas (-1 para terminar): ");
    scanf("%f", &hora);

    while(hora != -1) {

        printf("\nDigite o salário por hora do funcionário: ");
        scanf("%f", &preco_hora);

        if(hora <= 40) {
            salario = hora * preco_hora;
        }
        else {
            salario = 40 * preco_hora + ( (hora-40) * (preco_hora + preco_hora*0.5) );
        }

        printf("\nSalário é de %.2f reais.\n\n", salario);

        printf("Digite o quanto o trabalhador tem de horas acumuladas (-1 para terminar): ");
        scanf("%f", &hora);

    }

    return 0;
}
