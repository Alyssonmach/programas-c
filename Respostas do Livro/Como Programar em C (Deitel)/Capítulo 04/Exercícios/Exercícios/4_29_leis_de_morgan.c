#include <stdio.h>

int main (void)
{
    int x = 4, y = 7, a = 1, b = 1, g = 6, i = 6, j = 6;

    //a) !(x < 5) && !(y >= 7)
    if(!(x < 5 || y >= 7))
        printf("Verdade letra a.\n\n");
    else
        printf("\nFalso letra a.\n\n");
    //b) !(a == b) || !(g != 5)
    if(!(a == b && g != 5))
        printf("Verdade letra b.\n\n");
    else
        printf("\nFalso letra b.\n\n");
    //c) !(x <= 8 && y > 4)
    if(!(x <= 8) || !(y > 4))
        printf("Verdade letra c.\n\n");
    else
        printf("\nFalso letra c.\n\n");
    //d) !(i > 4 || j <= 6)
    if(!(i > 4) && !(j <= 6))
        printf("Verdade letra d.\n\n");
    else
        printf("\nFalso letra d.\n\n");

    return 0;
}
