#include <stdio.h>
#include <locale.h>

void move_pinos(int n, char comeco, char auxiliar, char fim);

int main(void)
{
    setlocale(LC_ALL,"");

    int pinos;

    printf("\t\t<<<<<PROGAMA QUE RESOLVE A TORRE DE HANOÍ>>>>>\n\n");

    printf("\nInsira o número de pinos: ");
    scanf("%d", &pinos);

    move_pinos(pinos, 'A', 'B', 'C');

    return 0;
}

void move_pinos(int n, char comeco, char auxiliar, char fim)
{
    if(n >= 1)
    {
        move_pinos(n - 1, comeco, fim, auxiliar);
        printf("\nO disco %d, se moveu da torre %c para a torre %c.\n", n, comeco, fim);
        move_pinos(n - 1, auxiliar, comeco, fim);
    }
}
