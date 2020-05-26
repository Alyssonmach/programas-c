#include <stdio.h>

int main (void)
{
    int contador;

    contador = 1;
//ABRINDO A ESTRUTURA DE UM FOR E UTILIZANDO UMA ESTRUTURA DE REPETIÇÃO WHILE EM SEU LUGAR
    while(contador <= 10) {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}

