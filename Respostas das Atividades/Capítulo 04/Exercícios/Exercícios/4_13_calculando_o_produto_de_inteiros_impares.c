//CALCULANDO O PRODUTO DE INTEIROS ÍMPARES;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int indice, produto = 1;
    setlocale(LC_ALL,"");

    for(indice = 1; indice <= 15; produto *=indice, indice += 2) {
        printf("%d\n", indice);
    }

    printf("\nPRODUTO DOS INTEIROS ÍMPARES: %d.\n\n", produto);

    return 0;
}
