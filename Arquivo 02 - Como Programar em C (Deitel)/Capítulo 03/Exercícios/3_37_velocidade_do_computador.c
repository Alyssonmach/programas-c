//QUAL A VELOCIDADE DO SEU COMPUTADOR?

#include <stdio.h>

int main (void)
{
    int contador = 0;

    while (contador != 300000000) {

        contador++;

        if(contador % 100000000 == 0) {
            printf("%d\n", contador);
        }

    }

    return 0;
}
