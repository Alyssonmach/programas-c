/*Uso de operadores de incremento e decremento*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero;
    setlocale(LC_ALL,"");

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    printf("\nNúmero Digitado: %d;\n\n", numero);
    printf("\nNúmero digitado e pós-incrementado: %d;\n\n", numero++);
    printf("\nNúmero Digitado: %d;\n\n", numero);

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    printf("\nNúmero Digitado: %d;\n\n", numero);
    printf("\nNúmero digitado e pré-incrementado: %d;\n\n", ++numero);
    printf("\nNúmero Digitado: %d;\n\n", numero);

    return 0;
}
