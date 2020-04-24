//CALCULADORA DE FREQUÊNCIA CARDIACA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int idade;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE MOSTRA A FREQUÊNCIA CARDIÁCA NORMAL E MÁXIMA DO USUÁRIO.\n");

    printf("\nDigite a sua idade: ");
    scanf("%d", &idade);

    printf("\nFrequência Cardíaca normal: %d bat/min.", (220 - idade) );
    printf("\nFrequência Cardíaca máxima: %.0f bat/min.", (208 - (0.7 * idade)) );

    return 0;
}
