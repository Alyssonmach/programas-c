//Mostra se o aluno foi aprovado ou reprovado usando a estrutura condicional

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int nota;
    setlocale(LC_ALL,"");

    printf("Informe a nota do aluno, na escala de 0 a 100: ");
    scanf("%d", &nota);

    nota >= 60 ? printf("\nAprovado.\n\n") : printf("\nReprovado.\n\n");

    return 0;
}

