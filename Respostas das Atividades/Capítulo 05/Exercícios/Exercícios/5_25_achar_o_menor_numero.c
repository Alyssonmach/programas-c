#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float menor(float, float, float);

int main (void)
{
    setlocale(LC_ALL,"");
    float num1, num2, num3;

    printf("\t\t<<<<<PROGAMA QUE ACHA O MENOR NÚMERO>>>>>\n\n");

    printf("\nInsira o primeiro número: ");
    scanf("%f", &num1);

    printf("\nInsira o segundo número: ");
    scanf("%f", &num2);

    printf("\nInsira o terceiro número: ");
    scanf("%f", &num3);

    printf("\n\nNúmero menor é %.2f.\n\n", menor(num1,num2,num3));

    return 0;
}

float menor(float num1, float num2, float num3)
{
    float menor;

    if(num1 < num2 && num1 < num3)
        menor = num1;
    else if(num2 < num1 && num2 < num3)
        menor = num2;
    else
        menor = num3;

    return menor;
}
