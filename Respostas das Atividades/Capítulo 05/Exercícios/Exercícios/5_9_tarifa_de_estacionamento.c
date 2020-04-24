//Progama que imprime a tarifa a ser paga do estacionamento.

#include <stdio.h>
#include <locale.h>

float preco_carro(float horario);

int main ()
{
    float hora1, hora2, hora3;
    setlocale(LC_ALL,"");

    printf("Progama que imprime a tarifa a ser paga do estacionamento.\n\n");

    printf("Digite a duração de tempo do carro 1 no estacionamento: ");
    scanf("%f", &hora1);
    printf("Digite a duração de tempo do carro 2 no estacionamento: ");
    scanf("%f", &hora2);
    printf("Digite a duração de tempo do carro 3 no estacionamento: ");
    scanf("%f", &hora3);

    printf("\n%s%13s%13s\n", "Carro", "Hora", "Taxa");
    printf("%s%13.2f%13.2f\n", "Carro 1", hora1, preco_carro(hora1));
    printf("%s%13.2f%13.2f\n", "Carro 2", hora2, preco_carro(hora2));
    printf("%s%13.2f%13.2f\n", "Carro 3", hora3, preco_carro(hora3));

    return 0;
}

float preco_carro(float horario)
{
    float valor = 0;

    if(horario <= 3)
        valor  = 2;
    else if(horario > 3 && horario < 24)
        valor = 2 + (0.5)*(horario - 3);
    else if(horario == 24)
        valor = 10;

    return valor;
}
