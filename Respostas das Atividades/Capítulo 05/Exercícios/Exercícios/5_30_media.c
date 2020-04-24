#include <stdio.h>
#include <locale.h>

int qualidade_media(float);

int main (void)
{
    setlocale(LC_ALL,"");
    float valor, media = 0, contador = 1, resultado = 0;

    printf("\t\t<<<<<PROGAMA QUE QUALIFICA UMA MÉDIA>>>>>\n\n");

    printf("\nAs notas aceitas são de 1 - 100\n\n");

    do
    {
        printf("\nInsira uma nota(-1 para parar): ");
        scanf("%f", &valor);

        if(valor != -1)
        {
            resultado = resultado + valor;
            media = resultado / contador;
            contador++;
            printf("\nValor médio: %.2f\n\n", media);
        }

    }while(valor != -1);

    printf("\nA qualidade da sua média é %d.\n\n", qualidade_media(media));

    return 0;
}

int qualidade_media(float numero)
{
    int resultado;

    if(numero >= 90)
        resultado = 4;
    else if(numero >= 80 && numero <= 89)
        resultado = 3;
    else if(numero >= 70 && numero <= 79)
        resultado = 2;
    else if(numero >= 60 && numero <= 69)
        resultado = 1;
    else if(numero < 60)
        resultado = 0;

    return resultado;
}
