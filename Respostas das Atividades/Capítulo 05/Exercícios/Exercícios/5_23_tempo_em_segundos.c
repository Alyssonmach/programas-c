#include <stdio.h>
#include <locale.h>

int tempo_segundos(int, int, int);

int main (void)
{
    setlocale(LC_ALL,"");
    int horas, minutos, segundos, tempo1, tempo2, resultado;

    printf("\t\t<<<<<PROGAMA QUE DÁ A DIFERENÇA EM MINUTOS DE DUAS HORAS>>>>>>\n\n");

    for(int indice = 1; indice <= 2; indice ++)
    {

        printf("\nDigite a %dº hora no padão HH_MM_SS: ", indice);
        scanf("%d%d%d", &horas, &minutos, &segundos);

        if(indice == 1)
            tempo1 = tempo_segundos(horas, minutos, segundos);
        else
            tempo2 = tempo_segundos(horas, minutos, segundos);

    }

    resultado = tempo2 - tempo1;

    printf("\n\nA diferença em segundos é de: %d segundos.\n\n", resultado);

    return 0;
}

int tempo_segundos(int horas, int minutos, int segundos)
{
    int resultado_segundos;

    resultado_segundos = ((horas - 12) * 60 * 60 ) + (minutos * 60) + segundos;

    return resultado_segundos;
}
