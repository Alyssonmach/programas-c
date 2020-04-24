//USANDO A ESTRUTURA DE REPETIÇÃO DO/WHILE

#include <stdio.h>

int main (void)
{
    int contador = 1;

    do {

        printf("%3d", contador);
        ++contador;

    }while(contador <= 10);

    return 0;
}
