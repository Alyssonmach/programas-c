//CONTADOR 7s

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, contador = 0, pega_digito;
    setlocale(LC_ALL,"");

    printf("DIGITE UM NÚMERO INTEIRO: ");
    scanf("%d", &numero);

    while (numero != 0) {
        pega_digito = (numero % 10);
        numero = numero / 10;
        if(pega_digito == 7) {
            contador++;
        }
    }

    printf("\nO NÚMERO POSSUi %d ALGARISMO (S) QUE EQUIVALEM A 7.\n\n", contador);

    return 0;
}
