/*Progama que calcula a média de 10 alunos usando a estrutura de repetição while*/

//Define total como zero
//Define contador de notas como 1
//
//Enquanto contador de notas é menor ou igual a dez
//  Lê a proxima nota
//  Soma a nota ao total
//  Soma um ao contador de notas
//
//Define a média da turma como o total dividido por dez
//Imprime a média da turma

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float nota, total = 0, contador = 1;
    setlocale(LC_ALL,"");

    while(contador <= 10) {

        printf("\nInforme a nota do aluno: ");
        scanf("%f", &nota);

        total = total + nota;

        contador = contador + 1;

    }

    printf("\nMédia da tura: %.1f pontos.\n\n", ( total / 10 ) );

    return 0;
}


