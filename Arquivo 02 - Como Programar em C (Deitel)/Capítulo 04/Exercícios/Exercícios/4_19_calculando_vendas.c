//CALCULANDO VENDAS

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int quantidade, escolha = 0;
    float soma = 0, prod1 = 2.98, prod2 = 4.50, prod3 = 9.98, prod4 = 4.49, prod5 = 6.87;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE CALCULA O PREÇO DAS REVENDAS MENSAIS.");

    while( !(escolha == -1) ) {

        printf("\n\n%13s%20s\n", "Número do Produto", "Preço de Venda");
        printf("%6d%28s\n", 1, "R$: 2.98");
        printf("%6d%28s\n", 2, "R$: 4.50");
        printf("%6d%28s\n", 3, "R$: 9.98");
        printf("%6d%28s\n", 4, "R$: 4.49");
        printf("%6d%28s\n", 5, "R$: 6.87");

        printf("\n\nEscolha qual produto você que levar(-1 para encerrar): ");
        scanf("%d", &escolha);
        if( !(escolha == -1) ) {
        printf("\nQuantos serão levados: ");
        scanf("%d", &quantidade);
        }

        if(escolha == 1) {
            soma = soma + (prod1 * quantidade);
        }
        else if(escolha == 2){
            soma = soma + (prod2 * quantidade);
        }
        else if(escolha == 3) {
            soma = soma + (prod3 * quantidade);
        }
        else if(escolha == 4) {
            soma = soma + (prod4 * quantidade);
        }
        else if(escolha == 5) {
            soma = soma + (prod5 * quantidade);
        }
        else if(escolha == -1) {
            printf("\nProgama Encerrado.\n\n");
        }
        else {
            printf("\n\a\a\aEntrada inválida, tente novamente.\n\n");
        }
    }

    printf("\nValor total das revendas: %.2f reais.\n\n", soma);

    return 0;
}
