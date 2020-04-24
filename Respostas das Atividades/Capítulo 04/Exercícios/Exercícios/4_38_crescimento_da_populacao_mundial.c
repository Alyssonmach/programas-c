//CRESCIMENTO DA POPULAÇÃO MUNDIAL

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float populacao = 7700000000, taxa = 0.0033, ano = 2018;
    setlocale(LC_ALL,"");

    printf("%s%25s%20s\n\n", "Ano", "População", "Porcentagem");

    for(int indice = 1; indice <= 75; indice ++) {

        printf("%.0f%25.2f BILHÕES%20.2f POR CENTO\n", ano = ano + 1, populacao = populacao + populacao * taxa, taxa*100);
    }

    populacao = 7700000000;
    ano = 2018;

    while(populacao <= 15400000000) {
        populacao = populacao + populacao * taxa;
        ano = ano + 1;
    }

    printf("\n\nANO EM QUE A POPULAÇÃO DOBRARÁ: %.0f ano.\n\n", ano);

    return 0;
}
