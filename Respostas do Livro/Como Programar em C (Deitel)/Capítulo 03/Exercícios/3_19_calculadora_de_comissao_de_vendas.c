/*Calculadora de comissão de vendas*/

//DECLARE A VARIÁVEL EM NÚMEROS FLUTUANTES preco E pagamento;
//IMPRIMA NA TELA "Informe a venda em reais (-1 para terminar): ";
//RECEBA DO USUÁRIO O VALOR DA VARIÁVEL preco;
//ENQUANTO A VARIÁVEL preco FOR DIFERENTE DE -1;
//  ATRIBUA A VARIÁVEL pagamento A MULTIPLICAÇÃO DA VARIÁVEL preco VEZES 0.09, ADICIONANDO FORA ESSA OPERAÇÃO 200;
//  MOSTRE NA TELA "\nO pagamento é de: %.2f reais.\n\n", JUNTAMENTO COM A VARIÁVEL PAGAMENTO;
//  IMPRIMA NA TELA "Informe a venda em reais (-1 para terminar): ";
//  RECEBA DO USUÁRIO O VALOR DA VARIÁVEL preco;
//  SE O VALOR DA VARIÁVEL FOR -1, FIM DA ESTRUTURA DE REPETIÇÃO;
//FIM DO PROGAMA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float preco, pagamento;
    setlocale(LC_ALL,"");

    printf("Informe a venda em reais (-1 para terminar): ");
    scanf("%f", &preco);

    while (preco != -1) {

        pagamento = (preco*0.09) + 200;
        printf("\nO pagamento é de: %.2f reais.\n\n", pagamento);

        printf("\nInforme a venda em reais (-1 para terminar): ");
        scanf("%f", &preco);

    }
    return 0;
}
