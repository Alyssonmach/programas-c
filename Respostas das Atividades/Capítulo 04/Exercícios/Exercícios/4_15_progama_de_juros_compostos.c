//PROGAMA DE JUROS COMPOSTOS

#include <stdio.h>
#include <locale.h>

int main (void)
{
    double valor, principal = 1000.0, taxa = 0.05;
    int ano;

    printf("%4s%21s%21s\n", "Ano", "Taxa", "Valor na conta");

    for(ano = 1; ano <= 6; ano = ano + 1) {

        valor = principal * pow(1.0 + taxa,ano);

        printf("%4d%21.2f%21.2f\n", ano,taxa, valor);
        taxa += 0.01;
    }

    return 0;
}
