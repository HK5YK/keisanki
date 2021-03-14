#include <math.h>
#include <stdio.h>
int main(void)
{
    double x,y,u,v,w,d;

    printf("x=?\n");
    scanf("%lf", &x);
    printf("y=?\n");
    scanf("%lf", &y);
    printf("u=?\n");
    scanf("%lf", &u);
    printf("v=?\n");
    scanf("%lf", &v);
    d = sqrt((x - u) * (x - u) + (y - v) * (y - v));
    printf("%lf",d);    
}