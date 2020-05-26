//IMPONDO PRIVACIDADE COM CRIPTOGRAFIA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, unidade, dezena, centena, milhar, codigo;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE CODIFICA UM NÚMERO DE QUATRO DÍGITOS.\n");

    printf("\nDigite um número inteiro com quatro dígitos, em que cada um seja igual ou superior a 3: ");
    scanf("%d", &numero);

    unidade = (numero % 10) + 7;
    numero /= 10;
    dezena = (numero % 10) + 7;
    numero /= 10;
    centena = (numero % 10) + 7;
    numero /= 10;
    milhar = (numero % 10) + 7;

    unidade %= 10;
    dezena %= 10;
    centena %= 10;
    milhar %= 10;

    codigo = dezena*1000 + unidade*100 + milhar*10 + centena;

    printf("\n%d", codigo);

    return 0;
}
