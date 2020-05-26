#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)
{
    setlocale(LC_ALL,"");
    int contador = 0, opcao;

    printf("\t\t<<<<<PROGAMA QUE APRESENTA UM QUESTIONÁRIO SOBRE AQUECIMENTO GLOBAL>>>>>\n\n");

    printf("\n1º PERGUNTA: o que é aquecimento global?");
    printf("\n1 - é um processo que garante que a Terra mantenha a temperatura adequada para a vida.");
    printf("\n2 - é um processo que garante o movimento das marés.");
    printf("\n3 - é um processo que garante a fotossíntese das plantas.");
    printf("\n4 - é um processo que garante o crescimento da vida populacional.");
    printf("\n\t\tOpção: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 1)
        contador++;

    printf("\n2º PERGUNTA: é benefício o fim do aquecimento global?");
    printf("\n1 - Sim, pois poderiamos acabar com a poluição do mundo.");
    printf("\n2 - Sim, as pessoas poderiam viver em um mundo com uma temperatura mais amena.");
    printf("\n3 - Não, sem ele, o planeta seria muito frio, a ponto de muitas formas de vida não existirem.");
    printf("\n4 - Não, pois as potências mundiais iriam falir as suas indústrias.");
    printf("\n\t\tOpção: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 3)
        contador++;

    printf("\n3º PERGUNTA: o que realmente agrava o aquecimento global?");
    printf("\n1 - O desenvolvimento econômico das grandes potências.");
    printf("\n2 - O problema está no aumento da emissão de gases poluentes, os chamados gases de efeito estufa.");
    printf("\n3 - A venda de produtos orgânicos nos supermercados.");
    printf("\n4 - A criação de animais domêsticos.");
    printf("\n\t\tOpção: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 2)
        contador++;

    printf("\n4º PERGUNTA: qual uma das consequências do efeito estufa?");
    printf("\n1 - mudança na composição da fauna e da flora em todo o planeta.");
    printf("\n2 - decrescimento da natalidade populacional.");
    printf("\n3 - crise nas grandes exploradoras de combustíveis.");
    printf("\n4 - ruralização dos indivíduos que moram na cidade.");
    printf("\n\t\tOpção: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 1)
        contador++;

    printf("\n5º PERGUNTA: qual a principal contribuição do brasil no aumento do aquecimento global?");
    printf("\n1 - combustíveis fósseis.");
    printf("\n2 - originária da queimada e derrubada de florestas, especialmente na Amazônia e Cerrado.");
    printf("\n3 - produção de bovinos.");
    printf("\n4 - atividade industrial.");
    printf("\n\t\tOpção: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 2)
        contador++;

    printf("\n\nVocê acertou %d perguntas.\n\n", contador);

    if(contador == 1 || contador == 2)
        printf("\nQue pena, você precisa estudar mais sobre o tema!\n\n");
    else if(contador == 3)
        printf("\nVocê se esforçou bastante, continue estudando sobre o tema!\n\n");
    else if(contador == 4)
        printf("\nQuase você acerta todas!\n\n");
    else if(contador == 5)
        printf("\nMuito bem! Você acertou tudo!\n\n");

    return 0;
}
