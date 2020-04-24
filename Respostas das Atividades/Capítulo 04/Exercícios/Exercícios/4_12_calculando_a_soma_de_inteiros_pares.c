//CALCULANDO A SOMA DE INTEIROS PARES;

#include <stdio.h>
#include <locale.h>

int main(void)
{
    int indice, soma = 0;

    for(indice = 2; indice <= 30; soma+=indice, indice+=2){
        printf("%d\n", indice);
    }

    printf("\nSOMA DOS INTEIROS PARES: %d.\n\n", soma);

    return 0;
}
