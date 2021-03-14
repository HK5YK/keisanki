#include <stdio.h>
int main(void)
{   int x, h, m, s;
    printf("x=?\n");
    scanf("%d", &x);
    
    h = x / (60 * 60);
    printf("%d\n", h);
    m = ( x % (60 * 60) ) / 60;
    printf("%d\n", m);
    s = x % 60;
    printf("%d\n", s);
}