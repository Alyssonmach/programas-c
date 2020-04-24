//Progama que calcula o diâmetroa, a circunferêcia e a área de um círculo;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    float raio;

    printf("Informe o raio da circunferência: ");
    scanf("%f", &raio);

    printf("\n\nO diamêtro é: %.2f", (2*raio) );
    printf("\n\nA circunferência é %.2f", (2*3.14159*raio) );
    printf("\n\nA área é %.2f", (3.14159*raio*raio) );

    printf("\n\n");

return 0;
}
