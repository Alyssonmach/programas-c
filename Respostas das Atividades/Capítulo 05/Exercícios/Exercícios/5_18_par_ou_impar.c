#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int par_impar(int num);

int main (void)
{
    setlocale(LC_ALL,"");
    int numero;

    printf("\t\t<<<<<PROGAMA QUE CALCULA SE UM NÚMERO É ÍMPAR OU PAR.>>>>>\n");

    do
    {

    printf("\nInsira um número inteiro(-1 para parar): ");
    scanf("%d", &numero);

        if(numero != -1)
        {
            if(par_impar(numero))
            {
                printf("\nO número %d é par!\n\n", numero);
            }
            else
            {
                printf("\nO número é %d ímpar!\n\n", numero);
            }

                system("pause");
                system("cls");
        }

    }while(numero != -1);

    return 0;
}

int par_impar(int num)
{
    if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

