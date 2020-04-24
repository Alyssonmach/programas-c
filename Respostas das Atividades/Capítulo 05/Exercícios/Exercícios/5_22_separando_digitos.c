#include <stdio.h>
#include <locale.h>

void divisao(int,int);
void modulo(int,int);
void separa_digitos(int);

int main(void)
{
    setlocale(LC_ALL,"");
    int numero1, numero2, numero_maior;

    printf("\t\t<<<<<PROGAMA QUE REALIZA OPERAÇÕES>>>>>\n");

    printf("\nInsira o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("\nInsira o segundo número inteiro: ");
    scanf("%d", &numero2);

    divisao(numero1, numero2);
    modulo(numero1, numero2);

    printf("\nDigite mais um número inteiro: ");
    scanf("%d", &numero_maior);

    separa_digitos(numero_maior);

    return 0;
}

void divisao(int num1,int num2)
{
    printf("\n%d / %d = %d (parte inteira)\n", num1, num2, num1 / num2);
}

void modulo(int num1,int num2)
{
    printf("\n%d resto %d = %d\n", num1, num2, num1 % num2);
}

void separa_digitos(int num1)
{
    int copia1, copia2, multiplicador = 1;

    copia1 = num1;

    while (copia1 != 0)
    {
        multiplicador = multiplicador * 10;
        copia1 = copia1 / 10;
    }

    while(multiplicador != 0)
    {
        copia2 = (num1 % multiplicador) / (multiplicador / 10);
        multiplicador = multiplicador / 10;
        printf("%d  ", copia2);
    }
}
