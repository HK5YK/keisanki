#include <stdio.h>
int main(void)
{
    int a, b, c, D ; 

    printf("a=?\n") ;
    scanf("%d", &a) ;
    printf("b=?\n") ;
    scanf("%d", &b) ;
    printf("c=?\n") ;
    scanf("%d", &c) ;
    
    D = b * b - 4 * a * c ; 

    if ( D > 0 ) {
        printf("2\n") ;
    } else if ( D == 0 ) {
        printf("1\n") ;
    }   else {
            printf("0\n") ;
    }
}