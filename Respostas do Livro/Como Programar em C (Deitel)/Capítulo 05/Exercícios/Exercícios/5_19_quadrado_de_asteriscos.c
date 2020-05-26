#include <stdio.h>
#include <locale.h>

void quadrado(int);

int main (void)
{
    setlocale(LC_ALL,"");
    int lado;

    printf("\t\t<<<<<PROGAMA QUE IMPRIME UM QUADRADO DE ASTERISCOS>>>>>\n");

    printf("\nInforme o lado: ");
    scanf("%d", &lado);

    printf("\n\n");

    quadrado(lado);

    return 0;
}

void quadrado(int side)
{
    for(int i = 1; i <= side; i++)
    {
        for(int j = 1; j <= side; j ++)
            printf("*");

        printf("\n");
    }

}
