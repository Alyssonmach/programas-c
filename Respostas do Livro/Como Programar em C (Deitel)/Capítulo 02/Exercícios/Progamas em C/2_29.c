//Progama que mostra o valor inteiro de um caractere;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");

    printf("Progama que mostra o valor inteiro de um caractere.\n\n");
    printf("\nA = %d", 'A');
    printf("\nB = %d", 'B');
    printf("\nC = %d", 'C');
    printf("\na = %d", 'a');
    printf("\nb = %d", 'b');
    printf("\nc = %d", 'c');
    printf("\n0 = %d", '0');
    printf("\n1 = %d", '1');
    printf("\n2 = %d", '2');
    printf("\n$ = %d", '$');
    printf("\n* = %d", '*');
    printf("\n+ = %d", '+');
    printf("\n/ = %d", '/');

    printf("\n\n");

return 0;
}
