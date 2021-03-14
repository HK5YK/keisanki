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
    int m, l ;

    printf("非負整数 m, l を入力してください\n") ;
    printf("m = ") ;  scanf("%d", &m) ;
    printf("l = ") ;  scanf("%d", &l) ;
    printf("sod(%d,%d) = %d\n", m, l, sod(m,l));
}