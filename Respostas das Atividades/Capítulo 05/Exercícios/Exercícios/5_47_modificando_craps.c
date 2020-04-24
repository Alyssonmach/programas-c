
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int lanca_dados(void);

int main(void)
{
    setlocale(LC_ALL,"");

    int soma, pontos, copia, contador = 0, novosaldo, parada;

    srand(time(NULL));

    printf("\t\t<<<<PROGAMA QUE SIMULA O JOGO DE CRAPS>>>>>\n\n");

    printf("\n\n");
    system("pause");
    system("cls");

    printf("\t\t\t<<<<<REGRAS DO JOGO>>>>>\n\n");
    printf("\n1 - SAINDO 7 OU 11 NA PRIMEIRA RODADA O JOGADOr GANHA!");
    printf("\n2 - SAINDO 2, 3 OU 12 NA PRIMEIRA RODADA O JOGADOR PERDE!");
    printf("\n3 - CASO CONTRÁRIO, O JOGADOR LANÇA O DADO NOVAMENTE.");
    printf("\n\t3.1 - GANHA SE SAIR O MESMO NÚMERO DURANTE RODADAS CONSECUTIVAS.");
    printf("\n\t3.2 - DURANTE AS RODADAS CONSECUTIVAS, PERDE SE A SOMA DOS DADOS FOR IGUAL A 7.\n\n");

    system("pause");
    system("cls");

    printf("\n\aBem - vindo!!!\n\n");

    system("pause");
    system("cls");

    printf("\n\aEu sou o seu assitente pessoal durante o jogo, irei lhe auxiliar em todos os passos!!\n\n");

    system("pause");
    system("cls");

    printf("\n\aMas antes eu preciso saber se você quer realmente jogar esse jogo!!\n\n");

    system("pause");
    system("cls");

    do
    {
        do
        {

        printf("\nVocê quer continuar jogando?\n\n1 - Sim\n2 - Não\n\tOpção: ");
        scanf("%d", &parada);

        if(parada == 1)
            printf("\n\aVocê é audacioso meu caro! Então vamos seguir em frente...\n\n");

        if(parada == 2)
            printf("\n\aQue pena! Queria tanto jogar com você! Até mais!\n\n");

        if(parada != 1 && parada != 2)
            printf("\n\aAcho que esse número não é uma opção, tente novamente!\n\n");

        system("pause");
        system("cls");

        }while(parada > 2 || parada < 1);

        if(parada != 2)
        {

            if(contador == 0)
            {

            do
            {
                printf("\n\aAgora preciso saber quanto de dinheiro você quer apostar!\n\tInforme uma aposta: ");
                scanf("%d", &novosaldo);

                if(novosaldo <= 1000 && novosaldo >= 100)
                {
                    printf("\nVocê apostou: %d R$\n\n", novosaldo);
                    printf("\n\aExcelente! Vamos começar a jogar!\n\n");
                }
                else
                    printf("\n\aOpá! O valor tem que ser maior que 100 R$ e menor que 1000 R$! você pode tentar novamente!.\n\n");

                system("pause");
                system("cls");

                } while(novosaldo < 100 || novosaldo > 1000);

            }

        }

        if(parada != 2)
        {

            if(novosaldo >= 1000)
                printf("\n\aNossa!! % R$? Você tem o dom para isso!!\n\n", novosaldo);
            else if(novosaldo >= 500 && novosaldo < 1000)
                printf("\n\aSem perdas não há ganho meu caro!! Você pode aumentar%d R$\n\n", novosaldo);
            else if(novosaldo >= 0 && novosaldo < 500)
                printf("\n\aContinue jogando, ainda há esperanças para mudar seus %d R$!!\n\n", novosaldo);
            else if(novosaldo < 0)
                printf("\n\aTenha calma, você está devendo %d R$ a banca!!\n\n", novosaldo);

        }

        if(parada != 2)
        {

            system("pause");
            system("cls");

            soma = lanca_dados();

            switch(soma)
            {
                case 7: case 11:
                    pontos = 1;
                    break;
                case 2: case 3: case 12:
                    pontos = 2;
                    break;
                default:
                    pontos = 0;
                    break;
            }

            if(pontos == 0)
            {
                printf("\nVocê não ganhou nem perdeu! Precisamos lançar os dados novamente!!\n\n");

                system("pause");
                system("cls");


                printf("\nSeus pontos são: %d\n\n", soma);

                system("pause");
                system("cls");
            }

            copia = soma;

            while(pontos == 0)
            {
                soma = lanca_dados();

                if(soma == copia)
                {
                     printf("\n\aEspera? É isso mesmo? Parece que teremos boas notícias!!!\n\n");

                    system("pause");
                    system("cls");

                    pontos = 1;
                }
                else if(soma == 7)
                {
                    printf("\n\aCaramba! Acho que não tivemos muita sorte dessa vez!\n\n");

                    system("pause");
                    system("cls");

                    pontos = 2;

                }

            }

            if(pontos == 1)
            {
                contador++;
                printf("\n\a\a\aVocê ganhou!!!!\n\n");

                system("pause");
                system("cls");

                printf("\n\aQue demais! Acho que você deveria continuar jogando!!\n\n");

                system("pause");
                system("cls");

                novosaldo = novosaldo + 100;

                printf("\nSeu saldo é de: %d R$\n\n", novosaldo);

            }
            else if(pontos == 2)
            {
                contador++;
                printf("\nVocê perdeu!\n\n");

                system("pause");
                system("cls");

                printf("\n\aQue pena!! Acho que temos chance de mudar esse placar, vamos tentar novamente!!\n\n");

                system("pause");
                system("cls");

                novosaldo = novosaldo - 100;

                printf("\nSeu saldo é de: %d R$\n\n", novosaldo);

            }

            system("pause");
            system("cls");

        }

    }while(parada != 2);


    return 0;
}

int lanca_dados(void)
{
    int dado1, dado2, soma;
    printf("\n\aAgora vamos lançar os dados!!\n\n");

    system("pause");
    system("cls");

    dado1 = ((rand() % 6) + 1);
    printf("\nLançando o primeiro dado");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    printf("\n\nValor do primeiro dado: %d\n\n", dado1);

    system("pause");
    system("cls");

    dado2 = ((rand() % 6) + 1);
    printf("\nLançando o segundo dado");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    printf("\n\nValor do segundo dado: %d\n\n", dado2);

    system("pause");
    system("cls");

    printf("\nAgora vamos somar os dois dados!\n\n");

    system("pause");
    system("cls");

    soma = dado1 + dado2;
    printf("\nO jogado lançou %d + %d = %d\n\n", dado1, dado2, soma);

    return soma;

}

