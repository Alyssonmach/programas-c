//PADRÃO DE ASTERISCOS XADREZ

#include <stdio.h>

int main (void)
{
    int indice1, indice2;

    for(indice1 = 1; indice1 <= 8; indice1 = indice1 + 1) {

        if(indice1 % 2 == 0)
        printf(" ");

        for(indice2 = 1; indice2 <= 8; indice2 = indice2 + 1) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
