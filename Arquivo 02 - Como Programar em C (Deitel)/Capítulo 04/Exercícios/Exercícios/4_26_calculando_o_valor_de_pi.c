#include <stdio.h>
#include <locale.h>

int main (void)
{
    double fracionador = 1, contador = 1, resultado = 0;
    setlocale(LC_ALL,"");

    while (resultado <= 3.14) {

        resultado = resultado + (4/fracionador) - (4/(fracionador+=2));
        fracionador+=2;
        contador++;

    }

    printf("\nPara que o resultado seja igual a %.2f o progama é executado %.0f vezes.\n\n", resultado, contador);

    fracionador = 1;
    contador = 2;
    resultado = 0;

    while (resultado <= 3.141) {

        resultado = resultado + (4/fracionador) - (4/(fracionador+=2));
        fracionador+=2;
        contador++;

    }

    printf("\nPara que o resultado seja igual a %.3f o progama é executado %.0f vezes.\n\n", resultado, contador);

    fracionador = 1;
    contador = 2;
    resultado = 0;

    while (resultado <= 3.1415) {

        resultado = resultado + (4/fracionador) - (4/(fracionador+=2));
        fracionador+=2;
        contador++;

    }

    printf("\nPara que o resultado seja igual a %.4f o progama é executado %.0f vezes.\n\n", resultado, contador);

    fracionador = 1;
    contador = 2;
    resultado = 0;

    while (resultado <= 3.14159) {

        resultado = resultado + (4/fracionador) - (4/(fracionador+=2));
        fracionador+=2;
        contador++;

    }

    printf("\nPara que o resultado seja igual a %.5f o progama é executado %.0f vezes.\n\n", resultado, contador);

    return 0;
}
