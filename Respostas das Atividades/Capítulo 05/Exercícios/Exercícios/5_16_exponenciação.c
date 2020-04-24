#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float exponencial(float base,float expoente);

int main (void)
{
    setlocale(LC_ALL,"");
    float base, expoente;

    printf("\t\t<<<<<PROGAMA QUE CALCULA O EXPONENCIAL.>>>>>\n");

    do
    {
        printf("\nDigite a base(-1 para parar): ");
        scanf("%f", &base);

        if(base != -1)
        {
            printf("\nDigite um expoente: ");
            scanf("%f", &expoente);

            printf("\nExponencial: %.2f.\n\n", exponencial(base, expoente));

            system("pause");
            system("cls");
        }

    }while(base != -1);


    return 0;

}

float exponencial(float base,float expoente)
{
    int indice;
    float resultado = 1;

    for(indice = 1; indice <= expoente; indice = indice + 1)
    {
        resultado = resultado * base;
    }

    return resultado;
}
