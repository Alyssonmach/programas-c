//SOMANDO UM INTERVALO DE NÚMEROS, UTILIZANDO UMA ESTRUTURA DE REPETIÇÃO E UM CONTADOR

#include <stdio.h>

int main (void)
{
    int numero, soma = 0;

    for(numero = 2; numero <= 100; numero +=2) {
        printf("%d\n", numero);
        soma += numero;
    }

    printf("SOMA: %d.\n\n", soma);

    return 0;
}

