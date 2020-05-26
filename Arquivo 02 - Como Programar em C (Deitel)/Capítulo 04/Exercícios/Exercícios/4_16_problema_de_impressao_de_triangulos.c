//PROBLEMA DE IMRESSÃO DE TRIÂNGULOS

#include <stdio.h>

int main (void)
{
    int indice, indice2, contador = 1, contador2 = 0, indice3;

    for(indice = 1; indice <= 10; indice++) {

        for(indice2 = 1; indice2 <= contador; indice2++) {
            printf("*");
        }

    contador++;
    printf("\n");

    }

    printf("\n\n");
    contador = 10;

    for(indice = 1; indice <= 10; indice++) {

        for(indice2 = 1; indice2 <= contador; indice2++) {
            printf("*");
        }

    contador--;
    printf("\n");

    }

    printf("\n\n");
    contador = 10;

    for(indice = 1; indice <= 10; indice++) {

        for(indice3 = 1; indice3 <= contador2; indice3++) {
            printf(" ");
        }

        for(indice2 = 1; indice2 <= contador; indice2++) {
            printf("*");
        }

    contador2++;
    contador--;
    printf("\n");

    }

    printf("\n\n");
    contador = 1;
    contador2 = 9;

     for(indice = 1; indice <= 10; indice++) {

        for(indice3 = 1; indice3 <= contador2; indice3++) {
            printf(" ");
        }

        for(indice2 = 1; indice2 <= contador; indice2++) {
            printf("*");
        }

    contador2--;
    contador++;
    printf("\n");

    }

    return 0;
}
