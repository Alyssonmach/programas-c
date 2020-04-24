#include <stdio.h>
#include <locale.h>

int mistery(int a, int b); //Protótipo da função;

//Função main inicia a execução do progama;
int main(void)
{
    setlocale(LC_ALL,"");
    int x; //Primeiro Inteiro;
    int y; //Segundo Inteiro;

    printf("\nDigite dois inteiros: ");
    scanf("%d%d", &x, &y);

    printf("\nO resultado é %d\n", mistery(x, y));

    return 0; //Indica conclusão bem sucedida;
} //Fim da função principal;

//Parâmetro b deve ser um inteiro positivo para imperdir recursão infinita;

int mistery(int a, int b)
{
    //Caso básico;
    if(b == 1)
        return a;
    else //Etapa recursiva;
        return  a + mistery(a, b - 1); //Fim do else;
} // Fim da função mistery;

//O PROGAMA EM QUESTÃO REALIZA UMA MULTIPLICAÇÃO ENTRE DOIS NÚMEROS POR RECURSIVIDADE;
