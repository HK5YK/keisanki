#include <stdio.h>

int power3_r(int n) {
    if (n == 0) 
        return 1 ; 
     else if (n % 2 == 0) {
        return power3_r(n /2) * power3_r(n /2) ; 
     }
     else
        return 3 * power3_r(n - 1) ;
    
}

int main (void) {
    int x ;

    printf("非負整数xを入力してください\n") ;
    printf("x = ") ; scanf("%d", &x) ;
    printf("3^%d = %d", x, power3_r(x)) ;
}