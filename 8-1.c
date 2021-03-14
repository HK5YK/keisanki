#include <stdio.h>

int power3(int n) {

    if(n <= 0)
       return 1 ;
    else
       return power3(n - 1) * 3 ;
}

int main (void) {
    int n ;

    printf("非負整数nを入力してください\n") ;
    printf("n = ") ; scanf("%d", &n) ;
    printf("3^%d = %d", n, power3(n)) ;
}