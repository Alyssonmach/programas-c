//USANDO O OPERADOR DE NEGAÇÃO LÓGICA

#include <stdio.h>

int main (void)
{
    int contador = 0;
//TRANSFORMA ALGUMA EXPRESSÃO NO OPOSTO DO SEU VALOR LÓGICO
    while( !(contador == 10) ) {

        contador++;
        printf("%5d", contador);

    }

    return 0;
}
