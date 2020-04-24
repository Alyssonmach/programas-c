#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    setlocale(LC_ALL,"");
    int tentativa, numero;

    srand(time(NULL));

    numero = (rand() % 1000) + 1;

    printf("\t\t<<<<<PROGAMA DE ACHAR NÚMEROS INTEIROS DE 1 - 1000>>>>>\n\n");

    do
    {
        printf("\n\nInforme sua tentativa: ");
        scanf("%d", &tentativa);

        if(tentativa < numero)
            printf("\nTentativa muito baixa!");
        if(tentativa > numero)
            printf("\nTentativa muito alta!");
        else if(tentativa == numero)
            printf("\nAcertou!");

        printf("\n\n");
        system("pause");
        system("cls");

    }while(numero != tentativa);

    return 0;
}
