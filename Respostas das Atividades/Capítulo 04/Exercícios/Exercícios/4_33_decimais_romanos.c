#include <stdio.h>
#include <locale.h>

int main(void)
{
    int a,b,c,d,e;
    setlocale(LC_ALL,"");

    printf("Lista de decimais romanos.\n\n");

    for(int indice = 1; indice <= 100; indice ++) {

    b = ((indice/100)%10)*100;
    c = ((indice/10)%10)*10;
    d = ((indice/1)%10)*1;

    if (b == 100) printf("C");

         if (c == 10) printf("X");
    else if (c == 20)  printf("XX");
    else if (c == 30)  printf("XXX");
    else if (c == 40)  printf("XL");
    else if (c == 50)  printf("L");
    else if (c == 60)  printf("LX");
    else if (c == 70)  printf("LXX");
    else if (c == 80)  printf("LXXX");
    else if (c == 90)  printf("XC");

         if (d == 1) printf("I");
    else if (d == 2) printf("II");
    else if (d == 3) printf("III");
    else if (d == 4) printf("IV");
    else if (d == 5) printf("V");
    else if (d == 6) printf("VI");
    else if (d == 7) printf("VII");
    else if (d == 8) printf("VIII");
    else if (d == 9) printf("IX");

    printf("\n");

    }

    return 0;
}
