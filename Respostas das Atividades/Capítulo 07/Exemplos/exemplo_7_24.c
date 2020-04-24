/* ProgramaparaEmbaralhamentoe Distribuição de Cartas*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void embaralha(int[][13]);
void distribui(const int[][13], const char*[], const char*[]);

int main() {
	setlocale(LC_ALL,"");
   const char *naipe[4] = {"Copas", "Paus", "Ouro", "Espadas"};
   const char *face[13] = {"Ás", "Dois", "Três", "Quatro", "Cinco", "Seis",
                                           "Sete", "Oito", "Nove", "Dez", "Valete",        
                                           "Dama", "Rei"};
   int baralho[4][13] = {0};

   srand(time(NULL));
   embaralha(baralho);
   distribui(baralho, face, naipe);
   return 0;
}

void embaralha(int cartas[][13]) {
   int linha, coluna, carta;

   for (carta = 1; carta <= 52; carta ++) {
      do {
         linha = rand() % 4;
         coluna = rand() % 13;
      } while (cartas[linha][coluna] != 0);
      cartas[linha][coluna] = carta;
   }
   return;
}

void distribui(const int cartas[][13], const char *faces[], const char *naipes[]) {
   int carta, linha, coluna;

   for (carta = 1; carta <= 52; carta++) {
      for (linha = 0; linha <= 3; linha ++)
         for (coluna = 0; coluna <= 12; coluna++)
            if (cartas[linha][coluna] == carta)
               printf("%6s de %-7s%c", faces[coluna], naipes[linha],
      carta%2 == 0 ? '\n' : '\t' );
   }
   return;
}