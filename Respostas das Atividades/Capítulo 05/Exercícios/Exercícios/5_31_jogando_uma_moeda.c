#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int flip (void);

int main (void)
{
    setlocale(LC_ALL,"");
    int contador1 = 0, contador2 = 0;

    srand(time(NULL));

    printf("\t\t<<<<<Progama de lançamento de moedas>>>>>\n\n");

    for(int indice = 1; indice <= 100; indice++)
    {
        if(flip())
            contador1++;
        else
            contador2++;
    }

    printf("\n\nCara = %d;\nCoroa = %d;\n\n", contador1, contador2);

    return 0;
}

int flip (void)
{
    int moeda;

    moeda = (rand() % 2) + 1;

    if(moeda == 1)
        return 1;
    if(moeda == 2)
        return 0;
}
