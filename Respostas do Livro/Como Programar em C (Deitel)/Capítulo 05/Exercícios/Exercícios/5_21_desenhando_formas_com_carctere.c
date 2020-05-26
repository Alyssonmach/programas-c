#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void quadrado(int);

int main (void)
{
    setlocale(LC_ALL,"");
    int lado;

    srand(time(NULL));

    printf("\t\t<<<<<PROGAMA QUE IMPRIME UM QUADRADO DE CARACTERE>>>>>\n");

    for(int indice = 1; indice <= 10; indice ++)
    {

        lado = (rand() % 20 + 1);

        printf("\n\n");

        quadrado(lado);

    }

    return 0;
}

void quadrado(int side)
{
    for(int i = 1; i <= side; i++)
    {
        for(int j = 1; j <= side; j ++)
            printf("%c", side);

        printf("\n");
    }

}


