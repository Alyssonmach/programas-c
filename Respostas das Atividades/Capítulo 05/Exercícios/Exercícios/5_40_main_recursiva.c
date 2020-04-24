#include <stdio.h>
#include <locale.h>

int main()
{
    static int count = 1;

    printf("%d", count++);

    return main(count);
}

//A função main não pode retornar ela mesma na estrutura por recursividade;
