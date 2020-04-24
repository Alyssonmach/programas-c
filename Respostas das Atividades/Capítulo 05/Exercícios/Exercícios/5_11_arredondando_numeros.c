#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

void arredInteiros(float);
void arredDecimos(float);
void arredCentesimos(float);
void arredMilesimos(float);

int main(void)
{
    setlocale(LC_ALL,"");
    float numero;
    printf("\t\t<<<<<Progama que arredonda números.>>>>>\n");

    do
    {
        printf("\nInforme um número real(-1 para parar): ");
        scanf("%f", &numero);

        if(numero != -1)
        {
            arredInteiros(numero);
            arredDecimos(numero);
            arredCentesimos(numero);
            arredMilesimos(numero);

            printf("\n\n");
            system("pause");
            system("cls");

        }
    }while(numero != -1);

    return 0;
}

void arredInteiros(float num1)
{
    printf("\n%.4f arredondado até o próximo inteiro é: %.0f.\n", num1, floor(num1 * 1 + .5) / 1);
}
void arredDecimos(float num1)
{
    printf("\n%.4f arredondado até o próximo décimo é: %.1f.\n", num1, floor(num1 * 10 + .5) / 10);
}
void arredCentesimos(float num1)
{
    printf("\n%.4f arredondado até o próximo centésimo é: %.2f.\n", num1, floor(num1 * 100 + .5) / 100);
}
void arredMilesimos(float num1)
{
    printf("\n%.4f arredondado até o próximo milésimo é: %.3f.\n", num1, floor(num1 * 1000 + .5) / 1000);
}
