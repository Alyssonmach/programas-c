#include <stdio.h>

//Função main inicia a execução do progama;

int main(void)
{
    int c; //variável para manter a entrada de caractere pelo usuário;

    if((c = getchar() ) != EOF)
    {
        main();
        printf("%c", c);
    } //Fim do if;

    return 0; //Indica conclusão bem sucedida;
} //Fim da main;


//COM ESSE PROGAMA É POSSÍVEL ESCREVER DIVERSOS CARACTERES;

