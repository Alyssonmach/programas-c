//LOSANGO MODIFICADO

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int contador1 = -1, contador2, numero;
    setlocale(LC_ALL,"");

    printf("Informe a diagonal do losango, sendo um número ímpar: ");
    scanf("%d", &numero);

    contador2 = ((numero / 2) + 1);

    for(int indice1 = 1; indice1 <= numero; indice1 ++) {

        if(indice1 <= ((numero / 2) + 1)) {
            contador1 +=2;
            contador2 --;
            for(int indice2 = 1; indice2 <= contador2; indice2++) {
                printf(" ");
            }
            for(int indice3 = 1; indice3 <= contador1; indice3++) {
                printf("*");
            }
            printf("\n");
        }

        if (indice1 > ((numero / 2) + 1) ) {
            contador1 -= 2;
            contador2 ++;
            for(int indice2 = 1; indice2 <= contador2; indice2++) {
                printf(" ");
            }
            for(int indice3 = 1; indice3 <= contador1; indice3++) {
                printf("*");
            }
            printf("\n");
        }

    }

    return 0;
}

