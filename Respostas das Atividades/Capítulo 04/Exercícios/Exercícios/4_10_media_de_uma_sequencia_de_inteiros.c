//MÉDIA DE UMA SEQUÊNCIA DE INTEIROS;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, soma = 0, contador = 0;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE CALCULA A MÉDIA DE INÚMEROS INTEIROS.\n\n");

    do {

        printf("Digite um número (9999 para parar): ");
        scanf("%d", &numero);

        if( !(numero == 9999) ) {
            soma += numero;
            contador++;
        }

    }while( !(numero == 9999));

    printf("\nMédia: %d.\n\n", (soma / contador) );

    return 0;
}
