//Mostra se o aluno foi aprovado ou reprovado usando a estrutura de decisão if e else, com o auxilio de blocos

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int nota;
    setlocale(LC_ALL,"");

    printf("Informe a nota do aluno, na escala de 0 a 100: ");
    scanf("%d", &nota);

    if (nota >= 60) {
        printf("\nAprovado.\n\n");
    }
    else {
        printf("\nReprovado.");
        printf("\nVocê preceisa fazer esse curso novamente.\n\n");
    }

    return 0;
}
