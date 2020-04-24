#include <stdio.h>
#include <locale.h>

int fatorial(int);

int main (void)
{
    setlocale(LC_ALL,"");

    int numero;

    printf("\t\t<<<<<PROGAMA QUE RESOLVE UM FATORIAL DE UM NÚMERO>>>>>");

    printf("\nInsira o valor de um número a ser fatorado: ");
    scanf("%d", &numero);

    printf("\nFatorial: %d", fatorial(numero));

    return 0;
}

int fatorial(int num)
{
    if(num <= 1)
        return 1;
    else
        printf("\n%d", num * fatorial(num - 1));
        return (num * fatorial(num - 1));
}
