#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

double fibonacci(double);

int main(void)
{
    setlocale(LC_ALL,"");
    double enesimo;

    printf("\t\t<<<<<PROGAMA QUE IMPRIME O VALOR DO ENÉSIMO TERMO DE FIBONACCI>>>>>\n\n");

    printf("\nInsira o valor do enésimo termo de fibonacii: ");
    scanf("%lf", &enesimo);

    printf("\n\nValor do enésimo termo de fibonacci: %.0lf.\n\n", fibonacci(enesimo));

    system("pause");
    system("cls");

    for(int indice = 1; indice <= enesimo; indice ++)
        printf("\n%.0lf", fibonacci(indice));

    return 0;
}

double fibonacci(double valor)
{
    int fib1 = 1, fib2 = 1, soma;

    for(int indice = 3; indice <= valor; indice++)
    {
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
    }

    return fib2;
}
