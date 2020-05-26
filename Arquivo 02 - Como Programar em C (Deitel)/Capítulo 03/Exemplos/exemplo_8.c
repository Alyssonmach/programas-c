/*Progama que vê a quantidade de alunos aprovados e reprovados, usando uma estrutura de repetição while*/

//Inicializa aprovações com zero
//Inicializa reprovações com zero
//
//Enquanto contador de alunos foi menor ou igual a dez
//  Lê o próximo resultado do exame
//
//  Se o aluno passou
//      Soma um às aprovações
//  Se não
//      Soma um as reprovações
//
//  Soma um ao contador de alunos
//
//Imprimir o número de aprovações
//Imprimir o número de reprovações
//Se mais de oito alunos passaram
//Imprimir "Bônus ao instrutor"

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
        }
        else {
            reprovados++;
        }

        aluno++;

    }

    printf("\nAprovados: %d alunos.\n\n", aprovados);
    printf("\nReprovados: %d alunos.\n\n", reprovados);

    if(aprovados >= 8) {
        printf("\nBônus do instrutor.\n\n");
    }

    return 0;
}
