//Progama que compara números inteiros;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int numero1, numero2;

    printf("Digite dois números inteiros: ");
    printf("\nNúmero 01: ");
    scanf("%d", &numero1);
    printf("\nNúmero 02: ");
    scanf("%d", &numero2);

    if(numero1 > numero2)
        printf("Número %d é maior que %d", numero1, numero2);
    else
        if(numero1 < numero2)
            printf("Número %d é menor que %d", numero1, numero2);
    else
        printf("Número %d é igual a %d", numero1, numero2);

    printf("\n\n");

return 0;
}
