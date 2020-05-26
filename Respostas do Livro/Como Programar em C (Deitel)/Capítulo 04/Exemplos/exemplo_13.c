//USANDO O COMANDO CONTINUE EM UMA ESTRUTURA FOR

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int x;
    setlocale(LC_ALL,"");

    for(x = 1; x <= 10; x++) {

        if(x == 5)
            continue;

        printf("%5d", x);

    }

    printf("\n\nUsou o continue para pular a exibição do 5.\n\n", x);

    return 0;
}

