#include <stdio.h>

int divisivle (int n, int i) {
    if (n % i == 0) return 1 ;
    else return 0 ; 
}
int sod (int n, int k) {
    int i, s = 0 ;

    for (i = 1; i < k + 1; i++) {
        if (divisivle(n,i) == 1) {
            s += i ; 
        }
    }
    return s ;
}
int main (void) {
    int n, i, j = 1 ; 

    printf("正整数nを入力してください\n") ;
    printf("n = ") ;  scanf("%d", &n) ;
    for (i = 1; i < n + 1; i++) {
        if (sod(i, i - 1) == i) {
            j = i ;
        }
    }
    printf("%d以下の最大の完全数は%dです\n", n, j) ;
}