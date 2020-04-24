/*Progama de Adição*/
#include <stdio.h>

//Função main inicia a execução do progama
int main (void)
{
    int inteiro1; //Primeiro número a ser informado pelo usuário
    int inteiro2; //Segundo número a ser informado pelo usuário
    int soma; //Variável em que a soma será mantida

    printf("Digite o primeiro inteiro\n"); //Prompt
    scanf("%d", &inteiro1); //lê um inteiro

    printf("Digite o primeiro inteiro\n"); //Prompt
    scanf("%d", &inteiro2); //lê um inteiro

    soma = inteiro1 + inteiro2; //Atribui o total a soma;

    printf("A soma vale %d\n", soma); //print soma

    return 0; //Indica que o progama foi concluido com sucesso
} //Fim da função main
