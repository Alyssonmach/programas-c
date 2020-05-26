#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void soma(void);
void multiplicacao(void);
void subtracao(void);

int main (void)
{
    setlocale(LC_ALL,"");
    int opcao;

    srand(time(NULL));

    printf("<<<<<PROGAMA PARA APRENDER TABUADA>>>>>\n\n");

    do
    {
        printf("\nEscolha uma das opções abaixo(-1 para parar):\n");
        printf("\n1 - Soma;");
        printf("\n2 - Subtração;");
        printf("\n3 - Multiplicação;");
        printf("\n\t\tOpção: ");
        scanf("%d", &opcao);

        printf("\n\n");
        system("pause");
        system("cls");

        if(opcao == 1)
            soma();
        else if(opcao == 2)
            subtracao();
        else if(opcao == 3)
            multiplicacao();
        else if( opcao != -1)
            printf("\nOpção inválida, por favor tente novamente!");

        printf("\n\n");
        system("pause");
        system("cls");

    }while(opcao != -1);

    return 0;
}

void soma(void)
{
    int numero1, numero2, resposta, soma;

    printf("\nVamos aprender a somar!\n\n");

    numero1 = (rand() % 9)+ 1;
    numero2 = (rand() % 9)+ 1;
    soma = numero1 + numero2;

    printf("\n\nQual a soma entre %d e %d?\n\tResposta: ", numero1, numero2);
    scanf("%d", &resposta);

    if(resposta == soma)
        printf("\nVocê acertou!!");
    else
        printf("\nVocê errou, a resposta é %d.\n\n", soma);

}

void multiplicacao(void)
{
    int numero1, numero2, resposta, multiplicacao;

    printf("\nVamos aprender a multiplicar!\n\n");

    numero1 = (rand() % 9)+ 1;
    numero2 = (rand() % 9)+ 1;
    multiplicacao = numero1 * numero2;

    printf("\n\nQual a multiplicação entre %d e %d?\n\tResposta: ", numero1, numero2);
    scanf("%d", &resposta);

    if(resposta == multiplicacao)
        printf("\nVocê acertou!!");
    else
        printf("\nVocê errou, a resposta é %d.\n\n", multiplicacao);

}
void subtracao(void)
{
    int numero1, numero2, resposta, subtracao;

    printf("\nVamos aprender a subtrair!\n\n");

    numero1 = (rand() % 9)+ 1;
    numero2 = (rand() % 9)+ 1;
    subtracao = numero1 - numero2;

    printf("\n\nQual a subtracao entre %d e %d?\n\tResposta: ", numero1, numero2);
    scanf("%d", &resposta);

    if(resposta == subtracao)
        printf("\nVocê acertou!!");
    else
        printf("\nVocê errou, a resposta é %d.\n\n", subtracao);

}
