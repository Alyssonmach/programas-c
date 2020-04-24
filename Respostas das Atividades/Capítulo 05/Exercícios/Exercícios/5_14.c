#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int aleatorio(void);

int main(void)
{
    setlocale(LC_ALL,"");

    printf("\t\t<<<<<PROGAMA QUE ACHA UM NÚMERO DE UMA SEQUÊNCIA.\n");

    printf("\n N = 2,4,6,8...: ");
    do
    {
        if(aleatorio() % 2 == 0)
        {
            printf("%d", aleatorio());
            break;
        }
    }while((aleatorio() % 2) != 0);

    printf("\n N = 3,5,7,9...: ");
    do
    {
        if(aleatorio() % 2 != 0)
        {
            printf("%d", aleatorio());
            break;
        }
    }while((aleatorio() % 2) == 0);
    printf("\n N = 6,10,14,18...: ");
    do
    {
        if(aleatorio() % 4 == 0)
        {
            printf("%d", aleatorio());
            break;
        }
    }while((aleatorio() % 4) != 0);

    printf("\n\n");
    getch();

}

int aleatorio(void)
{
    int resultado;

    srand(time(NULL));

    resultado = 1+ (rand() % 100);

    return resultado;
}
