//REGRAS DO JOGO:
// 1 - SAINDO 7 OU 11 NA PRIMEIRA RODADA O JOGADO GANHA;
// 2 - SAINDO 2, 3 OU 12 O JOGADOR PERDE;
// 3 - CASO CONTRÁRIO, O JOGADOR LANÇA O DADO NOVAMENTE;
//  3.1 - GANHA SE SAIR O MESMO NÚMERO;
//  3.2 - PERDE SE A SOMA DOS DADOS FOR IGUAL A 7;

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int lanca_dados(void);
void craps(void);

int main(void)
{
    setlocale(LC_ALL,"");
    srand(time(NULL));
    
    int indice;

	for(indice = 1; indice <= 2; indice++)		
    	craps();

    return 0;
}

int lanca_dados(void)
{
    int dado1, dado2, soma;

    dado1 = ((rand() % 6) + 1);
    dado2 = ((rand() % 6) + 1);

    soma = dado1 + dado2;

    printf("\nO jogado lançou %d + %d = %d\n\n", dado1, dado2, soma);

    return soma;

}

void craps(void)
{
	
	int soma, pontos, copia, contador1 = 0, contador2 = 0;
	
	printf("\t\t<<<<PROGAMA QUE SIMULA O JOGO DE CRAPS>>>>>\n\n");

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
            printf("\nPontos: %d\n\n", soma);
        }

        copia = soma;

        while(pontos == 0)
        {
            soma = lanca_dados();

            if(soma == copia)
                pontos = 1;
            else if(soma == 7)
                pontos = 2;

        }

        if(pontos == 1)
        {
            printf("\nVocê ganhou!\n\n");
            contador1++;
        }
        else if(pontos == 2)
        {
            printf("\nVocê perdeu!\n\n");
            contador2++;
        }
        
        return;
}
