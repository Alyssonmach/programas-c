#include <stdio.h>
#include <locale.h>

int mdc(int, int);

int main(void)
{
    setlocale(LC_ALL,"");
    int numero1, numero2;

    printf("<<<<<PROGAMA QUE ACHA O MÁXIMO DIVISOR COMUM DE DOIS NÚMEROS POR RECURSIVIDADE>>>>>\n\n");

    printf("\nInsira o primeiro número: ");
    scanf("%d", &numero1);

    printf("\nInsira o segundo número: ");
    scanf("%d", &numero2);

    printf("\nMDC = %d.\n\n", mdc(numero1, numero2));

    return 0;
}

int mdc(int x, int y)
{
    if(y == 0)
        return x;
    else
        return mdc(y, x % y);
}
