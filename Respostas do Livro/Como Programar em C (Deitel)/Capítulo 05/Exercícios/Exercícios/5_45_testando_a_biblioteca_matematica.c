#include <stdio.h>
#include <locale.h>
#include <math.h>

void matematica(float);

int main(void)
{
    setlocale(LC_ALL,"");
    float numero;

    printf("\t\t<<<<<Progama que testa as funções da biblioteca matematica.>>>>>\n\n");

    printf("\nInsira um número real: ");
    scanf("%f", &numero);

    matematica(numero);

    return 0;
}

void matematica(float num)
{
    printf("\n\n");
    printf("\nArredonda para baixo: %.2f", floor(num));
    printf("\nArredonda para cima: %.2f", ceil(num));
    printf("\nCalcula a raiz quadrada: %.2f", sqrt(num));
    printf("\nPotenciação por 2: %.2f", pow(num, 2));
    printf("\nSeno: %.2f", sin(num));
    printf("\nCosseno: %.2f", cos(num));
    printf("\nTangente: %.2f", tan(num));
    printf("\nLogaritmo natural: %.2f", log(num));
    printf("\nLogaritmo base 10: %.2f", log10(num));
    printf("\n\n");
}
