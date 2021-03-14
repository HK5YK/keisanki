#include <stdio.h>
int main(void)
{   int x, y ;
    printf("x=?\n");
    scanf("%d", &x);
    if(x >= 10){
        y = (x % 100) / 10;
        printf("%d\n", y);
    }else{
    printf("y=0\n");
    }
}