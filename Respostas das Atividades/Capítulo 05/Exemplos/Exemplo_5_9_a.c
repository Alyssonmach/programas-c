//Randomizando o progama de lançamento de dados.

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i;
    unsigned seed;

    printf("Type the seed: ");
    scanf("%u", &seed);

    srand(seed);

    for (i = 1; i <= 10; i = i + 1) {
        printf("%4d", (rand() % 6) + 1);

        if(i % 5 == 0)
            printf("\n");
    }

    return 0;
}
