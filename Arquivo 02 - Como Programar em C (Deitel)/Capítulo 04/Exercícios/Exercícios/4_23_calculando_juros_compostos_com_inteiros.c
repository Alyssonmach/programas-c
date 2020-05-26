#include <stdio.h>
#include <math.h>

int main (void)
{
    //DICA: OPERAR COM CENTAVOS, DEPOIS DIVIDIR POR 100 TENDO O RESULTADO O PREÇO EM REIAS E O MÓDULO EM CENTAVOS;
    int valor, principal = 100000, ano;
    double taxa = 0.05;

    printf("%4s%21s\n", "Ano", "Valor na conta");

    for(ano = 1; ano <= 10; ano = ano + 1) {

        valor = principal * pow(1.0 + taxa,ano);

        printf("%4d%18d,%d\n", ano, valor / 100, valor % 100);
    }

    return 0;
}

