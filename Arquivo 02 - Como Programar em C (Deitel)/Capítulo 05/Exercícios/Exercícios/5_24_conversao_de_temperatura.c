#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void celsius(int);
void fahrenheit(int);

int main (void)
{
    setlocale(LC_ALL,"");
    int opcao, temperatura;

    printf("\t\t<<<<<PROGAMA QUE CONVERTE TEMPERATURAS>>>>>\n");

    printf("\nEscolha a conversão: ");

    do
    {
        printf("\nEscolha a sua opção: ");
        printf("\n1 - Celsius para Fahrenheit");
        printf("\n2 - Fahrenheit para Celsius");
        printf("\n-1 para sair");
        printf("\n\tOpção: ");
        scanf("%d", &opcao);

        printf("\n\n");
        system("pause");
        system("cls");

        if(opcao == 1)
        {
            printf("\nInforme a temperatura em %s: ", "Celsius");
            scanf("%d", &temperatura);
            fahrenheit(temperatura);
        }

        else if (opcao == 2)
        {
            printf("\nInforme a temperatura em %s: ", "Fahrenheit");
            scanf("%d", &temperatura);
            celsius(temperatura);
        }

    }while(opcao != -1);

    return 0;
}

void celsius(int temp_fahrenheit)
{
    int temp_celsius;

    temp_celsius = (5 * (temp_fahrenheit - 32)) / 9;

    printf("\nTemperatura em Celsius: %d.\n\n", temp_celsius);
}

void fahrenheit(int temp_celsius)
{
    int temp_fahrenheit;

    temp_fahrenheit = ((9 * temp_celsius) / 5) + 32;

    printf("\nTemperatura em Fahrenheit: %d.\n\n", temp_fahrenheit);
}
