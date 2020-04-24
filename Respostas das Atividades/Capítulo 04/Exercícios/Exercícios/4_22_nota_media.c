#include <stdio.h>
#include <locale.h>

int main (void)
{
    int nota, aCount = 0, bCount = 0, cCount = 0, dCount = 0,eCount = 0, fCount = 0;
    setlocale(LC_ALL,"");

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

    if(aCount >= bCount && aCount >= cCount && aCount >= dCount && aCount >= eCount && aCount >= fCount) {
        printf("\nNOTA MÉDIA: %s.\n\n", "A");
    }
    else if(bCount >= aCount && bCount >= cCount && bCount >= dCount && bCount >= eCount && bCount >= fCount) {
        printf("\nNOTA MÉDIA: %s.\n\n", "B");
    }
    else if(cCount >= aCount && cCount >= bCount && cCount >= dCount && cCount >= eCount && cCount >= fCount) {
        printf("\nNOTA MÉDIA: %s.\n\n", "C");
    }
    else if(dCount >= aCount && dCount >= bCount && dCount >= cCount && dCount >= eCount && dCount >= fCount) {
        printf("\nNOTA MÉDIA: %s.\n\n", "D");
    }
    else if(eCount >= aCount && eCount >= bCount && eCount >= cCount && eCount >= dCount && eCount >= fCount) {
        printf("\nNOTA MÉDIA: %s.\n\n", "E");
    }
    else if(fCount >= aCount && fCount >= bCount && fCount >= cCount && fCount >= dCount && fCount >= eCount) {
        printf("\nNOTA MÉDIA: %s.\n\n", "F");
    }

    return 0;
}
