//Progama que testa as funções da biblioteca math.h

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)
{
    float x = 2, y = 4;
    setlocale(LC_ALL,"");

    printf("Progama que testa as funções da biblioteca math.h.\n\n");

    printf("Raiz quadrada: %f.\n", sqrt(x));
    printf("Exponencial: %f.\n", exp(x));
    printf("Logarítmo natural: %f.\n", log(x));
    printf("Logarítmo de x(base 10): %f.\n", log10(x));
    printf("Logarítmo natural: %f.\n", log(x));
    printf("Valor absoluto de X: %f.\n", fabs(x));
    printf("Arredondamento ao menor inteiro não menor que x: %f.\n", ceil(x));
    printf("Arredondamento ao maior inteiro não menor que x: %f.\n", floor(x));
    printf("X elevado a potência y: %f.\n", pow(x,y));
    printf("Módulo (resto) de x/y em um ponto flutuante: %f.\n", fmod(x,y));
    printf("Seno de x: %f.\n", sin(x));
    printf("Cosseno de x: %f.\n", cos(x));
    printf("Tangente de x: %f.\n", tan(x));

    return 0;
}
