#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main (void)
{
    int contador = 0;
    setlocale(LC_ALL,"");

    printf("Progama que imprime as tríplas de pitágoras não superiores a 500.\n\n");

    system("pause");
    printf("\n\n");

    for(int x = 1; x <= 500; x++) {
        for(int y = 1; y <= 500; y++) {
            for(int z = 1; z <= 500; z++) {
                if( x*x + y*y == z*z) {
                    printf("%d,%d,%d\n",x,y,z);
                    Sleep(20);
                    contador++;
                }
            }
        }
    }

    system("pause");

    printf("\nQuantidade de triplas não superiores a 500: %d.\n\n", contador);

    getch();

    return 0;
}
