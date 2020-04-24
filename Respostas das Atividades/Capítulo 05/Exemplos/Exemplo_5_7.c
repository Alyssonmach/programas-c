//Lançamento de dados
# include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int counter;

    for(counter = 1; counter <= 20; counter = counter + 1) {
        printf("%10d", (rand() % 6) + 1);

        if(counter % 5 == 0)
        printf("\n");
    }

    return 0;
}
