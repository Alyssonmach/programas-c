//Progama que faz uma calculadora de economia para o transporte solidário;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    float quilometros, precocomb, kml, precoesta, peda, litrototal=0, valor=0, pessoas, economia=0;

    printf("\tO transporte solidário é uma forma economicamente viável e sustentável \npara as pessoas e para o meio ambiente.");
    printf("Com esse recurso, as pessoas podem\nse locomover juntas e fazer uma baita economia!\nAo passo em que a natureza agradece!");
    printf("\n\n");
    printf("Vamos ver quanto você está gastando e quanto poderia economizar!\n\n");
    printf(" Quantos quilometros você percorre com o seu automóvel, em média, por dia? ");
    scanf("%f", &quilometros);
    printf("\n\nNa sua região, quanto está custando o combustível por litro? ");
    scanf("%f", &precocomb);
    printf("\n\nQuantos quilômetros são necessários para gastar um litro de combustível? ");
    scanf("%f", &kml);
    printf("\n\nQuanto, em média, você gasta com estacionamento diariamente? ");
    scanf("%f", &precoesta);
    printf("\n\nQuanto, em média, é o preço gasto com pedágio por dia? ");
    scanf("%f", &peda);

    litrototal = (quilometros*30)/kml;
    valor = (litrototal*precocomb) + (precoesta*30) + (peda*30);

    printf("\n\nVocê está gastando por mês: %.2f", valor);

    printf("\n\nCom cuantas pessoas você poderia compartilhar o seu carro? ");
    scanf("%f", &pessoas);

    economia = (valor*pessoas) - (valor/pessoas);

    printf("\n\nVocê poderia economizar compartilhando o seu automóvel com %.0f pessoas:\n%.2f reais.\n\n", pessoas, economia);

return 0;
}
