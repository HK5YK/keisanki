#include <math.h>
#include <stdio.h>
int main(void)
{
    int a, b, c ; double s, S ;

    printf("a=?\n") ;
    scanf("%d", &a) ;
    printf("b=?\n") ;
    scanf("%d", &b) ;
    printf("c=?\n") ;
    scanf("%d", &c) ;

    s = (a + b + c) / 2.0 ;

    S = sqrt(s * (s-a) * (s-b) * (s-c)) ;

    printf("S=%lf\n", S) ;
}