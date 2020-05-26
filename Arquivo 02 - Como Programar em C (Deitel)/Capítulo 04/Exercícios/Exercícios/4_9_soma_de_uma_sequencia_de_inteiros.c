//SOMA DE UMA SEQUÊNCIA DE INTEIROS;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, contador, soma = 0, indice;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE SOMA UMA SÉRIE DE INTEIROS.\n\n");

    printf("Digite quantos inteiros você quer somar: ");
    scanf("%d", &contador);

    for(indice = 1; indice <= contador; indice++) {
        printf("\nDigite um número: ");
        scanf("%d", &numero);
        soma += numero;
    }

    printf("\nSOMA: %d.\n\n", soma);

    return 0;
}
