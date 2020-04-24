#include <stdio.h>
#include <locale.h>

int maximo_divisor(int, int);

int main (void)
{
    setlocale(LC_ALL,"");
    int numero1, numero2;

    printf("\t\t<<<<<MÁXIMO DIVISOR COMUM>>>>>\n\n");

    printf("\nInsira um número: ");
    scanf("%d", &numero1);

    printf("\nInsira um outro número: ");
    scanf("%d", &numero2);

    printf("\nMáximo Divisor Comum é %d.\n\n", maximo_divisor(numero1, numero2));

    return 0;
}

int maximo_divisor(int num1, int num2)
{
    int menor, mdc;

    if(num1 < num2)
        menor = num1;
    else
        menor = num2;

    for(int indice = 1; indice <= menor; indice++)
        if((num1 % indice == 0) && (num2 % indice == 0))
            mdc = indice;

    return mdc;
}
