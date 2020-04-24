/*ACHE O NÚMERO MAIOR*/

//DECLARE AS VARIÁVEIS TIPO INTEIRO contador = 0, numero E maior = 0, REALIZANDO AS ATRIBUIÇÕES INICIAIS DEVIDAS;
//
//ENQUANTO CONTADOR FOR DIFERENTE DE 10;
//  IMPRIMA NA TELA A STRING "\nInsira um número inteiro: ";
//  PEÇA QUE O USUÁRIO INFORME O VALOR DA VARIÁVEL numero;
//  SE A VARIÁVEL numero FOR MAIOR QUE A VARIÁVEL maior:
//      FAÇA A SEGUNTE ATRIBUIÇÃO:  maior = numero;
//  INCREMENTAR A VARIÁVEL contador O VALOR 1;
//  QUANDO A VARIÁVEL contador TIVER UM VALOR ATRIBUIDO NA MEMÓRIA 10, A ESTRUTURA DE REPETIÇÃO SE ENCERRARÁ;
//
// IMPRIMA NA TELA A STRING "\nNúmero maior é: %d.\n\n", MOSTRANDO O VALOR ATRIBUIDO A VARIÁVEL maior;
//
//FIM DO PROGAMA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int contador = 0, numero, maior = 0;
    setlocale(LC_ALL,"");

    while(contador != 10) {

    printf("\nInsira um número inteiro: ");
    scanf("%d", &numero);

    if(numero > maior) {
        maior = numero;
    }

    contador++;

    }

    printf("\nNúmero maior é: %d.\n\n", maior);

    return 0;
}
