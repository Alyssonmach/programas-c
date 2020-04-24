//EULLER^x

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float numero = 1, fatorial = 1, euller = 0, contador = 2, x = 1;
    setlocale(LC_ALL,"");

   for(int indice = 1; indice <= 5; indice ++) {

        while(numero != 0) {
        (fatorial = fatorial * (numero--));
        }

    numero = contador;
    contador++;
    euller = euller + (x / fatorial);
    x = x*x;
    }

    printf("\nEULLER: %f\n\n", ( 1 + euller));

    return 0;
}

