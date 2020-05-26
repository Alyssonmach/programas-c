//TABELAS VERDADE

#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"");

    printf("%s%13s%35s\n\n", "Condição 1", "Condição 2", "Condição 1 && Condição 2");
    printf("%6d%13d%28d\n", 0, 0, 0);
    printf("%6d%13d%28d\n",0, 1, 0);
    printf("%6d%13d%28d\n", 1, 0, 0);
    printf("%6d%13d%28d\n", 1, 1, 1);

    printf("\n\n");

    printf("%s%13s%35s\n\n", "Condição 1", "Condição 2", "Condição 1 || Condição 2");
    printf("%6d%13d%28d\n", 0, 0, 0);
    printf("%6d%13d%28d\n",0, 1, 1);
    printf("%6d%13d%28d\n", 1, 0, 1);
    printf("%6d%13d%28d\n", 1, 1, 1);

    printf("\n\n");

     printf("%s%13s\n\n", "Condição 1", "!Condição 1");
     printf("%6d%13d\n", 0, 1);
     printf("%6d%13d\n", 1, 0);

    return 0;
}
