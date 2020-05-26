/*SAÍDA TABULAR*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int contador = 0;

    printf("%s\t%s\t%s\t%s\n", "A", "A+2", "A+4", "A+6");

    while(contador != 15) {

        contador += 3;

        printf("\n%d\t%d\t%d\t%d", contador, (contador + 2), (contador + 4), (contador + 6) );

    }

    return 0;
}
