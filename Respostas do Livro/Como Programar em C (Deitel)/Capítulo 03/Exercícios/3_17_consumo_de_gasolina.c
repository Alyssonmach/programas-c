/*Progama que calcula a quantidade de quilometros por litro de um carro em um percurso,
e mostra a media final de todos os valores digitados */

//declare as variaveis tipo flutuante quilometros, litro, media, soma_media e contador
//atribua a variável soma_media e contador o valor zero do teclado
//enquanto litros for diferente de -1
//  imprima na tela "Informe quantos litros abasteceu (-1 para terminar): "
//  receba do usuário o valor da variavel litros
//  se o valor da variável litro for diferente de -1
//      Imprima na tela "Informe quantos km dirigiu: "
//      receba do usuário o valor da variável quilômetros
//      atribua a divisão da variável quilômetros por litro na variável media
//      imprima na tela "O consumo atual é de: "
//      imprima na tela o valor da variável média
//      atribua a variável soma_media a soma dela mesma com a variável media
//      incremente 1 a variável contador
//  caso o usuário digite -1 na variável litro, fim da estrutura de repetição
//imprima na tela "O consumo geral foi de: "
//imprima na tela o valor da varíavel soma_media dividido pelo contador
//fim do progama

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float quilometros, litro, media, soma_media, contador;
    setlocale(LC_ALL,"");

    soma_media = 0;
    contador = 0;

    while(litro != -1) {

        printf("\nInforme quantos litros abasteceu (-1 para terminar): ");
        scanf("%f", &litro);

        if(litros != -1) {

            printf("\nInforme quantos km dirigiu: ");
            scanf("%f", &quilometros);

            media = quilometros / litro;

            printf("O consumo atual é de: %f km/l.\n\n", media);

            soma_media = soma_media + media;

            ++contador;

        }

    }

    printf("\nO consumo geral foi de: %.2f km/l.\n\n", (soma_media / contador) );

    return 0;
}
