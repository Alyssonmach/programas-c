//QUADRADO DE ASTERISCOS

#include <stdio.h>

int main (void)
{
    int lado, indice1, indice2;

    printf("Digite o valor do lado: ");
    scanf("%d", &lado);

    for(indice1 = 1; indice1 <= lado; indice1 = indice1 + 1) {

        for(indice2 = 1; indice2 <= lado; indice2 = indice2 + 1) {

            printf("%s", "*");

        }

    printf("\n");

    }

    return 0;
}

