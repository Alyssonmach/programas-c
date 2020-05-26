#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    setlocale(LC_ALL,"");
    int tentativa, numero, contador = 0;

    srand(time(NULL));

    numero = (rand() % 1000) + 1;

    printf("\t\t<<<<<PROGAMA DE ACHAR NÚMEROS INTEIROS DE 1 - 1000>>>>>\n\n");

    do
    {
        printf("\n\nInforme sua tentativa: ");
        scanf("%d", &tentativa);

        if(tentativa < numero)
        {
            printf("\nTentativa muito baixa!");
            contador++;
        }

        else if(tentativa > numero)
        {
            printf("\nTentativa muito alta!");
            contador++;
        }
        else
            printf("\nAcertou!");

        printf("\n\n");
        system("pause");
        system("cls");

    }while(numero != tentativa);

    printf("\nNúmero de tentativas: %d\n\n", contador);

    system("pause");
    system("cls");

    if(contador < 10)
        printf("\nOu você sabe o segredo ou você teve sorte!\n\n");
    else if(contador == 10)
        printf("\nVocê sabe o segredo!\n\n");
    else
        printf("\nTente um pouco mais!\n\n");

    return 0;
}

