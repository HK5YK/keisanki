#include <stdio.h>
int main (void)
{
              int a[10], i;

              printf("異なる整数値を10個入力してください\n");
              
              for ( i=0; i < 10; i++) {
                            scanf("%d", &a[i]);
              }

              int m, n, j;
              if ( a[0] > a[1]) {
                            m = a[0];
                            n = a[1]; 
              } else {
                            m = a[1];
                            n = a[0];
              }
              for ( j = 2; j < 10; j++) {
                            if (a[j] > m) {
                                          n = m;
                                          m = a[j];              
                            } else if ( a[j] < m && a[j] > n){
                                          n = a[j];
                            }
              }
              printf ("2番目に大きな値は%dです\n", n);
}