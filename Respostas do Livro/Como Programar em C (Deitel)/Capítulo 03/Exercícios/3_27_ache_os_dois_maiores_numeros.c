/*ACHE OS DOIS MAIORES NÚMEROS*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int contador = 0, numero, maior1 = 0, maior2 = 0;
    setlocale(LC_ALL,"");

    while(contador != 10) {

    printf("\nInsira um número inteiro: ");
    scanf("%d", &numero);


    if(maior1 == 0 && maior2 == 0) {
        maior1 = numero;
        maior2 = numero;
    }

    if (maior1 <= numero) {
        maior2 = maior1;
        maior1 = numero;
    }

    contador++;

    }

    printf("\nNúmeros maiores são: %d e %d.\n\n", maior2, maior1);

    return 0;
}

