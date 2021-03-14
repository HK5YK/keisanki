#include <stdio.h>

int main (void) {
    int n , i, j, k, l ;

    printf("正の整数nを入力してください\n") ;
    printf("n = ") ; scanf("%d", &n) ;
   
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ") ;
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*") ;
        }
        for (l = 1; l <= n -i; l++) {
            printf(" ") ;
        }
        printf("\n") ;
    }
}