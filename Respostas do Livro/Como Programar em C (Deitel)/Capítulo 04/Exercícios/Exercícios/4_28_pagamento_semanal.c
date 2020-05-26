#include <stdio.h>
#include <locale.h>

int main (void)
{
    int codigo = 0;
    float hora, vendas, itens;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE CALCULA O SALÁRIO DE FUNCIONÁRIOS.\n\n");

    while( !(codigo == -1) ) {

        printf("Selecione o tipo de empregado (-1 para parar):\n\n");
        printf("1 - GERENTES;\n2 - TRABALHADORES POR HORA;\n3 - TRABALHADORES COMISSIONADOS;\n4 - TRABALHADORES POR UNIDADE;\n\n");
        printf("CÓDIGO: ");
        scanf("%d", &codigo);

        if( !(codigo == -1) ) {

            switch(codigo) {

            case 1: {
                printf("\nSALÁRIO SEMANAL FIXO: %d reais.\n\n", 2500);
                break;
            }

            case 2: {
                printf("\nQuantas horas por semana você trabalhou: ");
                scanf("%f", &hora);
                if(hora <= 40) {
                    printf("\nSALÁRIO: %.2f reais.\n\n", hora*100);
                }
                else if (hora > 40) {
                    printf("\nSALÁRIO: %.2f reais.\n\n", ((40*100) + ((hora-40)*150)));
                }
                break;
            }

            case 3: {
                printf("\nQuanto em dinheiro você vendeu nessa semana: ");
                scanf("%f", &vendas);
                printf("\nSALÁRIO SEMANAL: %.2f reais.\n\n", ((vendas*0.057) + 250) );
                break;
            }

            case 4: {
                printf("\nQuantos itens você vendeu: ");
                scanf("%f", &itens);
                printf("\nSALÁRIO SEMANAL: %.2f reais.\n\n", (itens*100));
                break;
            }

            default:
                printf("\nTRABALHADOR NÃO REGISTRADO, TENTE NOVAMENTE!\n\n");
                break;
            }
        }
        else
            printf("\nFIM DO PROGAMA.\n\n");
    }

    return 0;
}
