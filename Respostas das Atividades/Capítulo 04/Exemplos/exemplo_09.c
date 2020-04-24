//CONTANDO NOTAS DE LETRA

#include <stdio.h>

int main (void)
{
    int nota, aCount = 0, bCount = 0, cCount = 0, dCount = 0,eCount = 0, fCount = 0;

    printf("DIGITE AS NOTAS EM LETRA.\n");
    printf("DIGITE O CARACTERE M PARA ENCERRAR A ENTRADA.\n");

    while((nota = getchar( )) != 77) {

        switch(nota) {

            case 'A':
            case 'a':
                ++aCount;
            break;

            case 'B':
            case 'b':
                ++bCount;
            break;

            case 'C':
            case 'c':
                ++cCount;
            break;

            case 'D':
            case 'd':
                ++dCount;
            break;

            case 'E':
            case 'e':
                ++eCount;
            break;

            case 'F':
            case 'f':
                ++fCount;
            break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
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
