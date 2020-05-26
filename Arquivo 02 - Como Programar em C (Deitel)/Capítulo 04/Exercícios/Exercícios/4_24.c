#include <stdio.h>
#include <locale.h>

int main (void)
{
    int i = 1, j = 2, k = 3, m = 2;

    printf("%d\n", i == 1);
    printf("%d\n", j == 3);
    printf("%d\n", i >= 1 && j < 4);
    printf("%d\n", m <= 99 && k < m);
    printf("%d\n", j >= i || k == m);
    printf("%d\n", k + m < j || 3 - j >= k);
    printf("%d\n", !m);
    printf("%d\n", !(j - m) );
    printf("%d\n", !(k > m) );
    printf("%d\n", !(j > k) );

    //O PROGAMA EM QUESTÃO ATESTA AS CONDIÇÕES LÓGICAS DADAS E INFORMA SE SÃO VERDADEIRAS OU FALSAS,
    //CASO VERDADEIRAS É UM NÚMERO DIFERENTE DE ZER, CASO FALSO O MESMO É IGUAL A ZERO;


    return 0;
}
