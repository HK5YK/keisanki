#include <stdio.h>

int sum (int n) {
    int i, s = 0 ;

    for (i = 1; i < n + 1; i++) {
        s += i ; 
    }
    return s ;
}
int main (void) {
    int x ;
    printf("正整数xを入力してください\n") ;
    printf("x = ") ;  scanf("%d", &x) ;
    printf("1から%dまでの整数の和は%dです\n", x, sum (x)) ;
}