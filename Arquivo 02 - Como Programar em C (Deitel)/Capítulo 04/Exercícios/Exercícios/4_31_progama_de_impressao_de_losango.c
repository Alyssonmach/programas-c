//PROGAMA DE IMPRESSÃO DE LOSANGO

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int contador1 = -1, contador2 = 5;
    setlocale(LC_ALL,"");

    for(int indice1 = 1; indice1 <= 9; indice1 ++) {

        if(indice1 <= 5) {
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

        if (indice1 > 5) {
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
