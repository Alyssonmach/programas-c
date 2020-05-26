/*IMPRIMINDO NÚMEROS POR LOOP*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int contador = 0;

    while(contador != 10) {

        contador++;
        printf("%3d", contador);

    }

    return 0;
}
