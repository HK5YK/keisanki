#include <stdio.h>
#include <math.h>
int main (void)
{
              int n, i, j;
              int p[n+1];

              printf("nまでの素数表を作る\n");
              printf("n = \n");
              scanf("%d", &n);

              for (i = 0; i <= n; i++){
                            p[i] = 1;
              }
              for (i = 2; i <= sqrt(n); i++){
                            if (p[i] == 1){
                                          for (j = 2 * i; j <= n; j = j + i){
                                                        p[i] = 0;
                                          }
                            }
              }
              for (i = 0; i <= n; i++){
                            if (p[i] == 1 && i != 0 && i != 1){
                                          printf("%d ", i);
                            }              
              }
              printf("\n");
}