/*Pré-incrementado versus pós-incrementando*/

#include <stdio.h>;
#include <locale.h>

int main (void)
{
    int numero;
    setlocale(LC_ALL,"");

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    printf("\nO número agora é: %d.", numero);
    printf("\nO número pré-incrementando é: %d.", ++numero);
    //ATRIBUIR O VALOR 1 SOMADO AO QUE JÁ TINHA A ESSA VARIÁVEL PARA DEPOIS REALIZAR A OPERAÇÃO;
    printf("\nO número agora é: %d.", numero);
    printf("\nO número pós-incrementando é: %d.", numero++);
    //REALIZA A OPERAÇÃO PARA DEPOIS ATRIBUIR O VALOR 1 SOMADO AO QUE JÁ TINHA A ESSA VARIÁVEL;
    printf("\nO número agora é: %d.", numero);

    return 0;
}
