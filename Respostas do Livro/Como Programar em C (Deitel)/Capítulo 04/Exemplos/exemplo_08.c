//CALCULANDO JUROS COMPOSTOS

#include <stdio.h>
#include <math.h>

int main (void)
{
    //NÚMERO TIPO DOUBLE É O MESMO QUE NÚMERO FLUTUANTE, A DIFERENÇA ESTÁ NA PRECISÃO
    //DOUBLE É MAIS PRECISO
    double valor, principal = 1000.0, taxa = 0.05;
    int ano;

    printf("%4s%21s\n", "Ano", "Valor na conta");

    for(ano = 1; ano <= 10; ano = ano + 1) {

        valor = principal * pow(1.0 + taxa,ano);

        printf("%4d%21.2f\n", ano, valor);
    }

    return 0;
}
