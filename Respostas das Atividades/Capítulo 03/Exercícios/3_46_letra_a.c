//FATORIAL

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, fatorial = 1;
    setlocale(LC_ALL,"");

    printf("DIGITE UM NÚMERO INTEIRO: ");
    scanf("%d", &numero);

    while(numero != 0) {
        fatorial = fatorial * (numero--);
    }

    printf("\nFATORIAL: %d", fatorial);

    return 0;
}
