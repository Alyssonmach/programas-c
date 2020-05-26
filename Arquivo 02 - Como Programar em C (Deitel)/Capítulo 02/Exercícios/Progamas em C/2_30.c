//Progama que separa dígitos em um inteiro;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int num, num1=0, num2=0, num3=0, num4=0, num5=0;

    printf("Digite um número inteiro de cinco dígitos: ");
    scanf("%d", &num);

    num1 = num/10000;
    num2 = num/1000;
    num2 = num2%10;
    num3 = num/100;
    num3 = num3%10;
    num4 = num/10;
    num4 = num4%10;
    num5 = num%10;

    printf("%3d %3d %3d %3d %3d", num1, num2, num3, num4, num5);

return 0;
}
