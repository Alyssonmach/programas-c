//Criando e usando uma função definida pelo progamador.

#include <stdio.h>

int square(int y); //Protótipo de uma função.

int main (void)
{
    int x; //contador.

    //lopp 10 vezes e calcula e exibe o quadrado de x a cada vez.
    for(x = 1; x <= 10; x = x + 1) {
        printf("%4d", square(x)); //Chamada da função.
    } //Fim do for.

    printf("\n");

    return 0; //Indica conclusão bem-sucedida.
} //Fim do main.

//Definição da função square retorna o quadrado do parâmetro.
int square(int y){ //y é uma cópia do argumento a função.
    return y*y; //retorna o quadrado de y com um int.
} //Fim da função square.
