//Progama que mostra um número ao quadrado e o cubo do mesmo, de 0 a 10;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int contador=0, indice;

    printf("%s%13s%13s\n\n", "Número", "Quadrado", "Cubo");

    for(indice=1;indice<=10;indice++) {
        printf("%d%13d%17d\n", contador, (contador*contador), (contador*contador*contador) );
        contador ++; }

return 0;
}
