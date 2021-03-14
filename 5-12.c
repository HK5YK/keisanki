#include <stdio.h>
int main(void)
{
              int s[20], cnt[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
              int i, j, k;

              printf("0から9までの整数値を20回入力してください\n");
              
              for (i = 0; i < 20; i++) {
                            scanf("%d", &s[i]);
              }

              for (i = 0; i < 20; i++) {
                            j = s[i];
                            cnt[j] += 1;     
              }
              
              for (k = 0; k < 10; k++) {
                            printf("%dは%d回読み込みました\n", k, cnt[k]);
              }
}