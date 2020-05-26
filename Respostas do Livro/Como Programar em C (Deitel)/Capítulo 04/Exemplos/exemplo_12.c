//USANDO O COMANDO BREAK EM UMA ESTRUTURA FOR

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int x;
    setlocale(LC_ALL,"");

    for(x = 1; x <= 10; x++) {

        if(x == 5)
            break;

        printf("%5d", x);

    }

    printf("\n\nSaiu do loop em x == %d.\n\n", x);

    return 0;
}
