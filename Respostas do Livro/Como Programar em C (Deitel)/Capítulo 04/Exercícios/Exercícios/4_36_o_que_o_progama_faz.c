//O QUE O PROGAMA FAZ?

#include <stdio.h>

int main (void)
{
    for(int i = 1; i <= 5; i ++) {
        for(int j = 1; j <= 3; j ++) {
            for(int k = 1; k <= 3; k ++) {
                printf("*");
            }
        printf("\n");
        }
    printf("\n");
    }

    return 0;
}

//IMPRIME CINCO QUADRADOS, UM ABAIXO DO OUTRO, UTILIZANDO ASTERISCOS
