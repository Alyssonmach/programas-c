/*SAÍDA TABULAR*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int contador = 0;

    printf("%s\t%s\t%s\t%s\n", "N", "10*N", "100*N", "1000*N");

    while(contador != 10) {

        contador++;
        printf("\n%d\t%d\t%d\t%d", contador, contador * 10, contador * 100, contador * 1000);

    }

    return 0;
}
