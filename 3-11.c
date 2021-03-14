#include <stdio.h>
int main(void)
{
    char ch ;
    int X ;

    printf("ch=?\n") ;
    scanf("%c", &ch) ;

    if ( ch != 'x' && ch != 'y' && ch != 'z'){
        X = (int)ch + 3 ;
    } else {
        X = (int)ch - 23 ;
    }

    printf("%c\n", X) ;
}