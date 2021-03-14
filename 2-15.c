#include <math.h>
#include <stdio.h>
int main (void)
{
    double r, a, b, c, d, e;
    printf("r=?\n");
    scanf("%lf" ,&r);

    a = 2 * r;
    printf("a=%lf \n", a);

    b = a * 3.14;
    printf("b=%lf \n", b);

    c = r * r * 3.14;
    printf("c=%lf \n", c);

    d = (1.0 / 2.0) * a * a;
    printf("d=%lf \n", d);

    e = (1.0 /2.0) * r * r * (sqrt(3.0) / 2.0) * 6;
    printf("e=%lf \n", e);

    printf("a,b,c,d,e はそれぞれ \n");
    printf("円の直径、円周の長さ、円の面積、内接する正方形の面積、内接する正６角形の面積 \n");
    printf("とする");
}