#include <stdio.h>

int is_prime (int n) {
    int i, j = 1 ;
    if (n != 1) {
        for (i = 2; i < n; i++) {
        if (n % i == 0) {
           j = 0 ; break ;
        }
        }
    }
    return j ;
}
int next_prime(int n) {
    int i, p ;
for (i = n + 1; is_prime(i) == 0; i++) {
        }
    return i ;
}
int main (void) {
    int x ;
    printf("正整数xを入力してください\n") ;
    printf("x = ") ;  scanf("%d", &x) ;
    if ( is_prime(x) == 1) {
        printf("%dは素数です\n", x) ;
    } else {
        printf("%dは素数ではありません\n", x) ;
    }
    printf("%dより大きな最小の素数は%dです\n", x, next_prime(x)) ;
}