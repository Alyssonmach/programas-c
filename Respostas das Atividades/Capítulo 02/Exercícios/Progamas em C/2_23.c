//Progama que mostra o número maior e o menor de cinco números digitados;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int num1, num2, num3, num4, num5, maior=0, menor=0;

    printf("Digite cinco números inteiros: ");
    printf("\nNumero 1: ");
    scanf("%d", &num1);
    printf("\nNumero 2: ");
    scanf("%d", &num2);
    printf("\nNumero 3: ");
    scanf("%d", &num3);
    printf("\nNumero 4: ");
    scanf("%d", &num4);
    printf("\nNumero 5: ");
    scanf("%d", &num5);

    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        maior = num1; }
    else
        if(num2 > num3 && num2 > num4 && num2 > num5) {
            maior = num2; }
    else
        if(num3 > num4 && num3 > num5) {
            maior = num3; }
    else
        if(num4 > num5) {
            maior = num4; }
    else {
        maior = num5; }

    if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
        menor = num1; }
    else
        if(num2 < num3 && num2 < num4 && num2 < num5) {
            menor = num2; }
    else
        if(num3 < num4 && num3 < num5) {
            menor = num3; }
    else
        if(num4 < num5) {
            menor = num4; }
    else {
        menor = num5; }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    printf("\n\n");

return 0;
}
