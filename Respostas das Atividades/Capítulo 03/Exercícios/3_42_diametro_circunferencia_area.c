//DIAMETRO, CIRCUNFERÊNCIA E ÁREA DE UM CÍRCULO

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)
{
    float raio, diametro, circunferencia, area, pi = 3.14159;
    setlocale(LC_ALL,"");

    printf("INFORME O RAIO DO CÍRCULO: ");
    scanf("%f", &raio);

    diametro = raio * 2;
    circunferencia = 2 * pi * raio;
    area = pi * pow(raio,2);

    printf("\nDIÂMETRO: %.2f", diametro);
    printf("\nCIRCUNFERÊNCIA: %.2f", circunferencia);
    printf("\nÁREA: %.2f", area);

    return 0;
}

