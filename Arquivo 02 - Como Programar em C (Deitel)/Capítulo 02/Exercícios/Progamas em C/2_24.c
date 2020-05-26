//Progama que mostra se um número inteiro é par ou ímpar;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
        printf("\né par!");
    else
        printf("\né impar!");

    printf("\n\n");

return 0;
}
