#include <math.h>
#include <stdio.h>
int main (void)
{
    int x;
    double t, a, b;
    
    printf("x=?\n"); scanf("%d", &x);

    t = sqrt(3.0) / 2.0 ;

    a = (1.0 / 2.0) * x * x * t ;
    printf("a=%lf \n", a);

    b = (1.0 / 3.0) * a * sqrt ( x * x - (2.0 / 3.0) * t * x * (2.0 / 3.0) * t * x ) ;
    printf("b=%lf", b);
}