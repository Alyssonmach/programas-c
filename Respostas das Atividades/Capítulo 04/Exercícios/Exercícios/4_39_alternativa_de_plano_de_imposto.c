//ALTERNATIVA DE PLANO DE IMPOSTO

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float moradia, alimentacao, vestuario, transporte, educacao, saude, ferias, soma;
    setlocale(LC_ALL,"");

    printf("QUANTO VOCÊ GASTA COM MORADIA POR MÊS: ");
    scanf("%f", &moradia);
    printf("\nQUANTO VOCÊ GASTA COM ALIMENTAÇÃO POR MÊS: ");
    scanf("%f", &alimentacao);
    printf("\nQUANTO VOCÊ GASTA COM VESTUÁRIO POR MÊS: ");
    scanf("%f", &vestuario);
    printf("\nQUANTO VOCÊ GASTA COM TRANSPORTE POR MÊS: ");
    scanf("%f", &transporte);
    printf("\nQUANTO VOCÊ GASTA COM EDUCAÇÃO POR MÊS: ");
    scanf("%f", &educacao);
    printf("\nQUANTO VOCÊ GASTA COM SAÚDE POR MÊS: ");
    scanf("%f", &saude);
    printf("\nQUANTO VOCÊ GASTA COM FÉRIAS POR MÊS: ");
    scanf("%f", &ferias);

    soma = moradia + alimentacao + vestuario + transporte + educacao + saude + ferias;
    soma = soma*0.23;

    printf("\nIMPOSTO MENSAL FAIRTAX: %.2f", soma);



    return 0;
}
