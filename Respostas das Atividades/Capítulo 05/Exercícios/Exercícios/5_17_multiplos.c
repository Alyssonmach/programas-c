#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int multiplos(int num1, int num2);

int main (void)
{
    setlocale(LC_ALL,"");

    int numero1, numero2;

    printf("\t\t<<<<<Progama se diz se o segundo número é múltiplo>>>>>\n");

    do
    {

        printf("\nInforme o primeiro número(-1 para parar): ");
        scanf("%d", &numero1);

        if(numero1 != -1)
        {
            printf("\nInforme o segundo número: ");
            scanf("%d", &numero2);

            if(multiplos(numero1,numero2))
            {
                printf("\n%d é um número múltiplo de %d.\n\n", numero2, numero1);
            }
            else
            {
                printf("\n%d não é um número múltiplo de %d.\n\n", numero2, numero1);
            }

            system("pause");
            system("cls");

        }


    }while(numero1 != -1);

    return 0;
}

int multiplos(int num1, int num2)
{
    if(num2 % num1 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
