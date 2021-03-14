#include <stdio.h>
int main(void)
{
    int h, m, s, w;

    printf("h=?\n");
    scanf("%d", &h);
    printf("m=?\n");
    scanf("%d", &m);
    printf("s=?\n");
    scanf("%d", &s);
   
    w = 60 * 60 * h + 60 * m + s;    
    
    printf("%d", w);
}