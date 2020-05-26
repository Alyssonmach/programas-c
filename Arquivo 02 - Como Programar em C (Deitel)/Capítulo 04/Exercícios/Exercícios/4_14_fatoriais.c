//FATORIAIS

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int contador1 = 1, contador2 = 1, fatorial = 1;
    setlocale(LC_ALL,"");

    printf("%7s%13s\n\n", "Número", "Fatorial");

    for(int indice = 1; indice <= 5; indice++) {

        while( !(contador1 == 0) ) {
            fatorial = fatorial*contador1;
            contador1 /= 10;
        }

        contador2++;
        contador1 = contador2;
        printf("%7d%13d\n", indice, fatorial);

    }

    return 0;
}
