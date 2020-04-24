//TESTADOR DE PALÍNDROMOS

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, copia, reverso;
    setlocale(LC_ALL,"");

    printf("Digite um número inteiro para testar se ele é ou não um palíndromo: ");
    scanf("%d", &numero);

    copia = numero;
    reverso = 0;

    while (copia != 0) {
        reverso = (reverso*10) + (copia % 10);
        copia = copia / 10;
    }

    printf("\nNúmero invertido: %d.\n", reverso);

    if(numero == reverso) {
        printf("\nÉ um palíndromo!\n\n");
    }
    else {
        printf("\nNão é um palíndromo!\n\n");
    }


    return 0;
}
