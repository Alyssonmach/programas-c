//Progama que mostra diversas formas de usar o printf;
#include <stdio.h>

int main () {

    {printf("\t");
    printf("1 2 3 4");}

    {printf("\n\n");
    printf("\t");
    printf("%s %s %s %s", "1", "2", "3", "4");}

    {printf("\n\n");
    printf("\t");
    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4 ");
    printf("\n\n");}

return 0;
}
