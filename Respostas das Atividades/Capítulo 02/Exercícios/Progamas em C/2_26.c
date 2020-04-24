//Progama que verifica se um número é múltiplo do outro;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int numero, multiplo;

    printf("Digite um número inteiro e outro para verificar se esse é múltiplo daquele.");
    printf("\nNúmero: ");
    scanf("%d", &numero);
    printf("Possível múltiplo: ");
    scanf("%d", &multiplo);

    if(multiplo % numero == 0)
        printf("\n\n%d é múltiplo de %d.", multiplo, numero);
    else
        printf("\n\n%d não é múltiplo de %d.", multiplo, numero);

    printf("\n\n");

return 0;
}
