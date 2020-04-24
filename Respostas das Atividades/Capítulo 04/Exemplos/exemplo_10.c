//VALOR DE ENDEREÇAMENTO DE UM CARACTERE

#include <stdio.h>
#include <locale.h>

int main (void)
{
    char valor;
    setlocale(LC_ALL,"");

    printf("Digite um caractere: ");
    scanf("%c", &valor);

    printf("\nO caractere %c tem valor de %d\n", valor, valor);
    return 0;
}
