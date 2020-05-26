#include <stdio.h>

int main (void)
{
    int nota, aCount = 0, bCount = 0, cCount = 0, dCount = 0,eCount = 0, fCount = 0;

    printf("DIGITE AS NOTAS EM LETRA.\n");
    printf("DIGITE O CARACTERE M PARA ENCERRAR A ENTRADA.\n");

    while((nota = getchar( )) != 77) {

        if(nota == 'A' || nota == 'a') {
            ++aCount;
        }

        else if(nota == 'B' || nota == 'b') {
            ++bCount;
        }
        else if(nota == 'C' || nota == 'c') {
            ++cCount;
        }
        else if(nota == 'D' || nota == 'd') {
            ++dCount;
        }
        else if(nota == 'E' || nota == 'e') {
            ++eCount;
        }
        else if(nota == 'F' || nota == 'f') {
            ++fCount;
        }
        else if(nota == '\n' || nota == '\t' || nota == ' ') {
        }
        else {
            printf("LETRA DE NOTA INCORRETA.\n");
            printf("Digite uma nova nota.\n");
        }

    }

    printf("\nTOTAIS DE CADA NOTA:\n");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("E: %d\n", eCount);
    printf("F: %d\n", fCount);

    return 0;
}

