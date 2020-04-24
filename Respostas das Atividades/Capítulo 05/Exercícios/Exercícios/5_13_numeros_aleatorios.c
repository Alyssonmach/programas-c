#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void numero_aleatorio(int value1,int value2);

int main(void)
{
    setlocale(LC_ALL,"");

    int a, b;

    srand(time(NULL));


    printf("\t\t<<<<<Progama que gera uma série de números aleatórios>>>>>\n");

    do
    {
        printf("\nInsira o primeiro intervalo da escala(9999 para parar): ");
        scanf("%d", &a);

        if(a != 9999)
        {
            printf("\nInsira o último intervalo da escala: ");
            scanf("%d", &b);

            numero_aleatorio(a,b);

            printf("\n\n");
            system("pause");
            system("cls");
        }

    }while(a != 9999);


    return 0;
}

void numero_aleatorio(int value1,int value2)
{

    int resultado;

    printf("\nInvertavalo: [%d,%d]: ", value1, value2);

    value2 = value2 - value1;

    for(int indice = 1; indice<= 10; indice++)
    {
        resultado = (value1 + (rand() % (value2 + 1)));

        printf("%d  ", resultado);
    }

    printf("\n");
}
