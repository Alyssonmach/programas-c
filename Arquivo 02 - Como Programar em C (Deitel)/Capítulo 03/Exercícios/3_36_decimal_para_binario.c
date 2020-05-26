//DECIMAL PARA BINÁRIO

#include <stdio.h>
#include <locale.h>

int main(void)
{
    int binario, decimal = 0, copia, conversor = 1;
    setlocale(LC_ALL,"");

    printf("Digite um número binário: ");
    scanf("%d", &binario);

    copia = binario;

    while(copia != 0) {

        decimal = decimal + (copia % 10) * conversor;
        conversor *= 2;
        copia = copia / 10;

    }

    printf("\nNúmero Binário: %d", binario);
    printf("\nEquivalente Decimal: %d\n\n", decimal);

    return 0;
}
