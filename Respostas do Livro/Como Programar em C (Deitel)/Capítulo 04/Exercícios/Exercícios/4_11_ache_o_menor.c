//ACHE O MENOR;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, menor = 99999, controlador, indice;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE ACHA O MENOR DOS NÚMEROS.");

    printf("\n\nDigite quantos números serão testados: ");
    scanf("%d", &controlador);

    for(indice = 1; indice <= controlador; indice++) {
        printf("\nDigite um número: ");
        scanf("%d", &numero);

        if(numero <= menor) {
            menor = numero;
        }

    }

    printf("\nNúmero menor: %d.\n\n", menor);

    return 0;
}
