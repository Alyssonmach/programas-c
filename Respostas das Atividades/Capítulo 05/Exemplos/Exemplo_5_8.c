//Lançando um dado 6000 vezes com gerador de semente.

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int count, face, frequency1 = 0, frequency2 = 0, frequency3 = 0, frequency4 = 0, frequency5 = 0, frequency6 = 0;

    for(count = 1; count <= 6000; count = count + 1) {
        face = (rand() % 6) + 1;


        switch (face) {

        case 1:
            frequency1++;
            break;

        case 2:
            frequency2++;
            break;

        case 3:
            frequency3++;
            break;
        case 4:
            frequency4++;
            break;

        case 5:
            frequency5++;
            break;

        case 6:
            frequency6++;
            break;
        }

    }

    printf("\n\n%13s%13s", "Face", "Frequency");
    printf("\n%13d%13d", 1, frequency1);
    printf("\n%13d%13d", 2, frequency2);
    printf("\n%13d%13d", 3, frequency3);
    printf("\n%13d%13d", 4, frequency4);
    printf("\n%13d%13d", 5, frequency5);
    printf("\n%13d%13d", 6, frequency6);

    return 0;
}
