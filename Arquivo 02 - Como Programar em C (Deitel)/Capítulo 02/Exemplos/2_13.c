/*Usando instruções if, operadores relacionais e operadores de igualdade*/
#include <stdio.h>
#include <locale.h> //biblioteca da linguagem padrão da máquina
//Função main inicia a execução do progama
int main (void)
{
    int num1; //Primeiro número do usuário a ser lido
    int num2; //Segundo número do usuário a ser lido

    setlocale(LC_ALL,""); //Funnção para ler strings acentuadas

    printf("Entre com dois inteiros e eu lhe direi\n");
    printf("as relações que eles satisfazem: ");

    scanf("%d%d", &num1, &num2); //Lê dois inteiros

    if(num1 == num2) {
        printf("%d é igual a %d\n", num1, num2);
    } //Fim do if
    if(num1 != num2) {
        printf("%d não é igual a %d\n", num1, num2);
    } //Fim do if
    if(num1 < num2) {
        printf("%d é menor que %d\n", num1, num2);
    } //Fim do if
    if(num1 > num2) {
        printf("%d é maior que %d\n", num1, num2);
    } //Fim do if
    if(num1 <= num2) {
        printf("%d é menor ou igual que %d\n", num1, num2);
    } //Fim do if
    if(num1 >= num2) {
        printf("%d é maior ou igual que %d\n", num1, num2);
    } //Fim do if

    return 0; //Indica que o progama foi concluido com sucesso
} //Fim da função main
