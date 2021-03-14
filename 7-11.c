#include <stdio.h>

int rank (int n, int a[], int j) {
          int i, k, b[n] ;
          for (i = 0; i < n; i++) {
              for (k = 0; k < n; k++) {
                   if (a[i] < a[k]) {
                       b[i] = 1 ;
                       b[i] += 1 ;
                   }
              }
          }
          return b[i] ;
}
int main (void) {
              int i, j, a[10] ;
              printf("10人の試験の点数を入力してください\n") ;
              for (j = 0; j < 10 ; j++) {
                            scanf("%d", &a[i]) ;
              }
              for (j = 0; j < 10 ; j++) {
                            printf("%d人目の順位は%d位\n", j, rank(10, a, j)) ;
              }
              
}