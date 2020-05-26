//MULTIPLO DE 2 COM UM LOOP INFINITO

#include <stdio.h>

int main (void)
{
    int contador = 2, indice;

    while (contador != 0) {
        printf("%d\n", contador);
        contador = contador * 2;
    }

    return 0;
}

/*
Assim, em 32 bits, o maior inteiro que o processador consegue lidar é 4.294.967.295 e isto apenas se for considerado
números inteiros positivos, sem sinal. Como os processadores utilizam a representação complemento de dois para números inteiros,
ao permitir que se use sinal a faixa de representação de um inteiro em 32 bits vai de -2.147.483.648 até +2.147.483.647
(com complemento de dois ganha-se uma representação a mais no lado negativo).
*/
