//Randomizando o progama de lançamento de dados com a biblioteca time.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int i;
    unsigned seed;

    srand(time(NULL));

    for (i = 1; i <= 10; i = i + 1) {
        printf("%4d", (rand() % 6) + 1);

        if(i % 5 == 0)
            printf("\n");
    }

    return 0;
}

