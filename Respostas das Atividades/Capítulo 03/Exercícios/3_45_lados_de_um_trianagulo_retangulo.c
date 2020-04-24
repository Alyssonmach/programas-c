//LADOS DE UM TRIÂNGULO RETÂNGULO

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)
{
    float lado1, lado2, lado3;
    setlocale(LC_ALL,"");

    printf("INFORME TRÊS LADOS DE UM TRIÂNGULO RETÂNGULO.\n");
    printf("\nLado 01: ");
    scanf("%f", &lado1);
    printf("\nLado 02: ");
    scanf("%f", &lado2);
    printf("\nLado 03: ");
    scanf("%f", &lado3);

    if((lado1*lado1 + lado2*lado2 == lado3*lado3) || (lado2*lado2 + lado3*lado3 == lado1*lado1) || (lado1*lado1 + lado3*lado3 == lado2*lado2))
         printf("\nÉ UM TRIÂNGULO RETÂNGULO VÁLIDO.\n\n");
    else
        printf("\nNÃO É UM TRIÂNGULO RETÂNGULO VÁLIDO.\n\n");

    return 0;
}
