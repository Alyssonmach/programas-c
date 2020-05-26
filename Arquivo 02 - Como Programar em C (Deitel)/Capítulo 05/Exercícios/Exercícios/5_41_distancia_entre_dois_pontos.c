#include <stdio.h>
#include <locale.h>
#include <math.h>

double distancia(double, double, double, double);

int main(void)
{
    setlocale(LC_ALL,"");
    double x1, y1, x2, y2;

    printf("\t\t<<<<<PROGAMA QUE CALCULA A DISTÂNCIA ENTRE DOIS PONTOS>>>>>\n\n");

    printf("\nInforme o primeiro ponto: ");
    printf("\nX1: ");
    scanf("%lf", &x1);
    printf("\nY1: ");
    scanf("%lf", &y1);

    printf("\nInforme o segundo ponto: ");
    printf("\nX2: ");
    scanf("%lf", &x2);
    printf("\nY2: ");
    scanf("%lf", &y2);

    printf("\nDistância entre dois pontos: %.2lf", distancia(x1,y1,x2,y2));

    return 0;
}

double distancia(double x1, double y1, double x2, double y2)
{
    return sqrt( pow(x2 - x1,2) + pow(y2 - y1,2) );
}
