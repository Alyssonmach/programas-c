#include <stdio.h>

int main (void)
{
    int contador = 0;

    while (contador != 100) {

        contador++;
        printf("*");
        if(contador % 10 == 0) {
            printf("\n");
        }

    }

    return 0;
}
