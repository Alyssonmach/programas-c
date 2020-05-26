//REPTIÇÃO CONTROLADA POR CONTADOR

#include <stdio.h>

int main (void)
{
    int contador = 0;

    while(++contador <= 10) {

        printf("%d\n", contador);

    }

    return 0;
}
