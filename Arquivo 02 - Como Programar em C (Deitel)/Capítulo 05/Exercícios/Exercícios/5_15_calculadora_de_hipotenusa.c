#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

double hipotenusa(double cat1, double cat2);

int main (void)
{
    setlocale(LC_ALL,"");
    double cateto1,cateto2;

    printf("\t\t<<<<<PROGAMA QUE CALCULA A HIPOTENUSA.>>>>>.\n");

    do
    {
        printf("\nInforme o valor do primeiro cateto(-1 para parar): ");
    scanf("%lf", &cateto1);

    if(cateto1 != -1)
    {

        printf("\nInforme o valor do segundo cateto: ");
        scanf("%lf", &cateto2);

        printf("\nValor da hipotenusa: %.2lf.\n\n", hipotenusa(cateto1,cateto2));

        system("pause");
        system("cls");

    }


    }while(cateto1 != -1);

    return 0;
}

double hipotenusa(double cat1, double cat2)
{
    double resultado;

    resultado = sqrt(pow(cat1,2) + pow(cat2,2));

    return resultado;
}
