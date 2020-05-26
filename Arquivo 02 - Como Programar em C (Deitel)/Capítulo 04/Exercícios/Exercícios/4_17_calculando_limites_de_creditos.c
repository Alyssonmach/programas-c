#include <stdio.h>
#include <locale.h>

int main (void)
{
    int conta;
    float limite, saldo;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE CALCULA O LIMITE DE CRÉDITO.\n\n");

    for(int indice = 1; indice <= 3; indice++) {

    printf("\nConta do usuário %d: ", indice);
    scanf("%d", &conta);
    printf("\nLimite do usuário %d: ", indice);
    scanf("%f", &limite);
    printf("\nSaldo do usuário %d: ", indice);
    scanf("%f", &saldo);

    printf("\nConta do usuário %d: %d;", indice, conta);
    printf("\nNovo limite do usuário %d: %.2f;", indice, (limite/2));
    printf("\nSaldo do usuário %d: %.2f;\n", indice, saldo);
    if(saldo > (limite/2) )
        printf("\n\a\a\aSaldo do usuário %d é maior que o limite de conta novo permitido.\n\n", indice);

    }
    return 0;
}
