#include <stdio.h>
#include <locale.h>

int exponencial(int, int);

int main(void)
{
    setlocale(LC_ALL,"");
    int base, expoente;

    printf("\t\t<<<<<PROGAMA QUE IMPRIME UMA EXPONENCIAÇÃO>>>>>\n\n");

    printf("\nDigite uma base: ");
    scanf("%d", &base);

    printf("\nDigite um expoente: ");
    scanf("%d", &expoente);

    printf("\n\nResultado = %d.\n\n", exponencial(base, expoente));

    return 0;
}

int exponencial(int base, int expoente)
{
    while(expoente != 1)
    {
        return (base * exponencial(base, expoente - 1));
    }

}
