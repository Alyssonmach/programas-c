//Mostra se o aluno foi aprovado ou reprovado usando uma estrutura condicional

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int nota;
    setlocale(LC_ALL,"");

    printf("Informe a nota do aluno, na escala de 0 a 100: ");
    scanf("%d", &nota);

    printf("\n%s.\n\n", nota >= 60 ? "Aprovado" : "Reprovado" );

    return 0;
}

