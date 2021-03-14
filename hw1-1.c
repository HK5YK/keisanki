#include <stdio.h>

int main (void) {
    int x, y, M, m, i, sum = 0 ;

    printf("2つの正整数値 x, y を入力してください\n") ;
    printf("x = ") ; scanf("%d", &x) ;
    printf("y = ") ; scanf("%d", &y) ;

    M = x >= y ? x : y ;
    m = x <= y ? x : y ;

    for (i = m; i <= M; i++) {
        sum += i ;
    }
    printf("%d以上で%d以下の整数の和は%dです", m, M, sum) ;
}