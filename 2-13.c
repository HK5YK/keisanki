#include <stdio.h>
int main (void)
{
    double f, i, c;

    printf("f=?\n"); scanf("%lf", &f);
    printf("i=?\n"); scanf("%lf", &i);

    c = 30.48 * f + (30.48 / 12) * i ;
    printf("%lf",c);
}