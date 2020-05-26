/*PROGAMA QUE CALCULA O NOVO SALDO DO LIMITE DE CREDITO E MOSTRA SE O LIMITE DO MESMO FOI ULTRAPASSADO OU NÃO*/

// DECLARE AS VARIÁVEIS COMO NÚMEROS FLUTUANTES numero_conta, saldo_inicio, encargos, creditos, limite_credito e saldo_final;
// IMPRIMA NA TELA "Informe o número da conta (-1 para terminar): ";
// RECEBA DO USUÁRIO O VALOR DA VARIÁVEL numero_conta;
// ENQUANTO numero_conta FOR DIFERENTE DE -1...
//      IMPRIMA NA TELA "Informe o saldo inicial: ";
//      RECEBA DO USUÁRIO O VALOR DA VARIÁVEL saldo_inicio;
//      IMPRIMA NA TELA "Informe o total de encargos: ";
//      RECEBA DO USUÁRIO O VALOR DA VARIÁVEL encargos;
//      IMPRIMA NA TELA "Informe o total de creditos: ";
//      RECEBA DO USUÁRIO O VALOR DA VARIÁVEL creditos;
//      IMPRIMA NA TELA "Informe o limite de créditos: ";
//      RECEBA DO USUÁRIO O VALOR DA VARIÁVEL limite_credito;
//      IMPRIMA NA TELA "Conta: " E O VALOR DA VARIÁVEL numero_conta;
//      IMPRIMA NA TELA "Limite de crédito: " E O VALOR DA VARIÁVEL limite_credito;
//      ATRIBUA A VARIÁVEL saldo_final A SOMA ENTRE AS VARIÁVEIS saldo_inicio E encargos E SUBTRAI DESSE VALOR A VARIÁVEL creditos;
//      IMPRIMA NA TELA "Saldo: " E O VALOR DA VARIÁVEL saldo_final;
//      SE A VARIÁVEL saldo_final FOR MAIOR QUE limite_credito;
//          IMPRIMA NA TELA "Limite de crédito ultrapassado.";
//      SE NÃO
//          IMPRIMA NA TELA "Limite de crédito NÃO ultrapassado.";
//      IMPRIMA NA TELA "Informe o número da conta (-1 para terminar): ";
//      RECEBA DO USUÁRIO O VALOR DA VARIÁVEL numero_conta;
//      CASO SEJA DIGITADO -1 NA VARIÁVEL numero_conta, FIM DA ESTRUTURA DE REPETIÇÃO;
//FIM DO PROGAMA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float numero_conta, saldo_inicio, encargos, creditos, limite_credito;
    float saldo_final;
    setlocale(LC_ALL,"");

    printf("\nInforme o número da conta (-1 para terminar): ");
    scanf("%f", &numero_conta);

    while ( numero_conta != -1 ) {

        printf("\nInforme o saldo inicial: ");
        scanf("%f", &saldo_inicio);

        printf("\nInforme o total de encargos: ");
        scanf("%f", &encargos);

        printf("\nInforme o total de creditos: ");
        scanf("%f", &creditos);

        printf("\nInforme o limite de créditos: ");
        scanf("%f", &limite_credito);

        printf("\n\n");

        printf("Conta: %.2f.", numero_conta);
        printf("\nLimite de crédito: %.2f.", limite_credito);

        saldo_final = (saldo_inicio + encargos) - creditos;

        printf("\nSaldo: %.2f.", saldo_final);

        if(saldo_final > limite_credito) {

            printf("\nLimite de crédito ultrapassado.\n\n");

        }
        else {

            printf("\nLimite de crédito não ultrapassado.\n\n");

        }

        printf("\nInforme o número da conta (-1 para terminar): ");
        scanf("%f", &numero_conta);

    }

    return 0;
}
