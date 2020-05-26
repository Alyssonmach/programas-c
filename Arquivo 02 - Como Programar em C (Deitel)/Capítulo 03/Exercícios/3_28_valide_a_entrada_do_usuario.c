/*VALIDE A ENTRADA DO USUÁRIO*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int aprovados = 0, reprovados = 0, aluno = 1, resultado;
    setlocale(LC_ALL,"");

    while(aluno <= 10){

        printf("\nForneça o resultado (1 - Aprovado / 2 - Reprovado): ");
        scanf("%d", &resultado);

        if(resultado == 1){
            aprovados++;
            aluno++;
        }
        else if (resultado ==2) {
            reprovados++;
            aluno++;
        }
        else {
            printf("\nEntrada inválida, tente novamente...\n");

        }

    }

    printf("\nAprovados: %d alunos.\n\n", aprovados);
    printf("\nReprovados: %d alunos.\n\n", reprovados);

    if(aprovados >= 8) {
        printf("\nBônus do instrutor.\n\n");
    }

    return 0;
}

