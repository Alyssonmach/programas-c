//Progama que faz operações aritméticas e mostra o maior e o menor dos números;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int numero1, numero2, numero3, soma=0, media=0, produto=0, maior=0, menor=0;

    printf("Digite três inteiros diferentes:\n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    soma = numero1 + numero2 + numero3;
    media = (numero1 + numero2 + numero3)/3;
    produto = numero1 * numero2 * numero3;

    printf("\nSoma: %d", soma);
    printf("\nMédia: %d", media);
    printf("\nProduto: %d", produto);

    if (numero1 > numero2 && numero1 > numero3) {
        maior = numero1; }
    else
        if(numero2 > numero3) {
            maior = numero2; }
        else {
            maior = numero3;}

    if (numero1 < numero2 && numero1 < numero3) {
        menor = numero1; }
    else
        if(numero2 < numero3) {
            menor = numero2; }
        else {
            menor = numero3;}

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);

    printf("\n\n");

return 0;
}
