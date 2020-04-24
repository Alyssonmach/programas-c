/*Mostra a categoria do aluno usando múltiplos if e else*/

//Se a nota do aluno é maior ou igual a 60
//  Imprima 'A'
//Se não
//  Se a nota do aluno é maior que 80
//      Imprima 'B'
//  Se não
//      Se a nota do aluno é maior que 70
//          Imprima 'C'
//      Se não
//          Se a nota do aluno é maior que 60
//              Imprima 'D'
//          Se não
//              Imprima 'F'

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int nota;
    setlocale(LC_ALL,"");

    printf("Informe a nota do aluno: ");
    scanf("%d", &nota);

    if(nota >= 90)
        printf("\nCategoria: A;\n\n");
    else if (nota >= 80)
        printf("\nCategoria: B;\n\n");
    else if (nota >= 70)
         printf("\nCategoria: C;\n\n");
    else if (nota >= 60)
         printf("\nCategoria: D;\n\n");
    else
        printf("\nCategoria: F;\n\n");

    return 0;
}
