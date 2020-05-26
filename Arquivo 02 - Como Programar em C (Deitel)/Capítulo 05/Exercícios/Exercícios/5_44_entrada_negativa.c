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

    if(y >= 0)
        printf("\nO resultado é %d\n", mistery(x, y));
    else
        printf("\nO resultado é %d\n", -1 * mistery(x, y)); //Garantindo a relação de sinais;

    return 0; //Indica conclusão bem sucedida;
} //Fim da função principal;

//Parâmetro b deve ser um inteiro positivo para imperdir recursão infinita;

int mistery(int a, int b)
{
    if(b < 0)
        b = b*-1; //Tiro o sinal negativo de b, se for menor que zero, e restauro na função principal;
    //Caso básico;
    if(b == 1)
        return a;
    else //Etapa recursiva;
        return  a + mistery(a, b - 1); //Fim do else;
} // Fim da função mistery;

//O PROGAMA EM QUESTÃO REALIZA UMA MULTIPLICAÇÃO ENTRE DOIS NÚMEROS POR RECURSIVIDADE;

