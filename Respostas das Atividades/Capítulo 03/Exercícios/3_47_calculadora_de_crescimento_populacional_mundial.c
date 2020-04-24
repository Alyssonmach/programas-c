//CALCULADORA DE CRESCIMENTO POPULACIONAL MUNDIAL;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float habitantes, taxa, estimativa;
    setlocale(LC_ALL,"");

    printf("\n\nDigite a população atual em bilhoes: ");
    scanf("%f", &habitantes);
    printf("\nDigite a taxa de crescimento do mesmo, dividido por 100%: ");
    scanf("%f", &taxa);

    estimativa = habitantes + (habitantes*taxa);

    printf("\nEM UM ANO: %.2f BILHÕES.", estimativa);
    estimativa = estimativa + (estimativa * taxa);
    printf("\nEM DOIS ANOS: %.2f BILHÕES.", estimativa);
    estimativa = estimativa + (estimativa * taxa);
    printf("\nEM TRÊS ANOS: %.2f BILHÕES.", estimativa);
    estimativa = estimativa + (estimativa * taxa);
    printf("\nEM QUATRO ANOS: %.2f BILHÕES.", estimativa);
    estimativa = estimativa + (estimativa * taxa);
    printf("\nEM CINCO ANOS: %.2f BILHÕES.\n\n", estimativa);

    return 0;
}
