//REPTIÇÃO CONTROLADA POR CONTADOR

#include <stdio.h>

int main (void)
{
    int contador = 1;

    while(contador <= 10) {

        printf("%d\n", contador);
        ++contador;

    }

    return 0;
}
