#include <stdio.h>

int C (int n, int k) {
              int i, j, a[n + 1][n + 1] ;
          
              for (i = 0; i <= n; i++) {
                            if (i == 0) {
                               for (j = 0; j <= n; j++) {
                                 if (j == 0) a[i][j] = 1 ;
                                 else a[i][j] = 0 ;
                               }
                            }
                            else {
                               for (j = 0; j <= n; j++) {
                                 if (j > i) a[i][j] = 0 ;
                                 else if (j == 0) a[i][j] = 1 ;
                                 else a[i][j] = a[i-1][j-1] + a[i-1][j] ;   
                               }
                            }
              }
              return a[n][k] ;
} 
int main (void) {
              int n, k ;
              printf("n>=kを満たす非負整数n,kを入力してください\n") ;
              printf("n : ") ; scanf("%d", &n) ;
              printf("k : ") ; scanf("%d", &k) ;
              printf("パスカルの三角形の%d段%d番目の値は%dです\n", n, k, C(n, k)) ;
}