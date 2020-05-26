#include <stdio.h>

int main (void)
{
    float x;

    printf("%f\n", x = fabs(7.5));
    printf("%f\n", x = floor(7.5));
    printf("%f\n", x = fabs(0.0));
    printf("%f\n", x = ceil(0.0));
    printf("%f\n", x = fabs(-6.4));
    printf("%f\n", x = ceil(-6.4));
    printf("%f\n", x = ceil(- fabs( - 8 + floor(-5.5))));

    return 0;
}
