#include <stdio.h>
#include <locale.h>

int primo(int);

int main (void)
{
    setlocale(LC_ALL,"");
    int contador = 0;

    printf("<<<<<PROGAMA QUE MOSTRA A SEQUÊNCIA DE NÚMERO PRIMOS DE  1 ATÉ 10000>>>>>\n\n");

    for (int indice = 1; indice <= 10000; indice++)
    {
        if(primo(contador) != 0)
            printf("\n%d", primo(contador));

        contador++;

    }

    return 0;
}

int primo(int numero)
{
    int contador = 0;

    for (int indice = 2; indice <= (numero / 2); indice ++)
    {
        if(numero % indice == 0)
            contador++;
    }

    if(contador == 0 && numero != 1)
        return numero;
    else
        return 0;
}
