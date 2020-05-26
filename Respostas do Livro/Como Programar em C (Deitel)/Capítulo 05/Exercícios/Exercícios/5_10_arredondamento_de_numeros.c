#include <stdio.h>
#include <locale.h>
#include <math.h>

float arrendonda(float numero);

int main(void)
{
    setlocale(LC_ALL,"");

    float numero, arredondamento;

    printf("\t\t<<<<<Progama que arredonda números.>>>>>\n\n");

    do{
    printf("Insira um número(-1 para parar): ");

    scanf("%f", &numero);

    if(numero != -1)
    {
        printf("\nArredondamento de %.0f é: %.2f.\n\n", numero, arrendonda(numero));
    }
    }while(numero != -1);

    return 0;
}

float arrendonda(float numero)
{
    return floor(numero + .5);
}
