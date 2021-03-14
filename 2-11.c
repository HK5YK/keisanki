#include <math.h>
#include <stdio.h>
int main (void)
{
    double b, n, t;

    printf("b=?\n");
    scanf("%lf",&b);
    printf("n=?\n");
    scanf("%lf",&n);

    t = log(n) / log(b) ;
    printf("%lf",t);
}