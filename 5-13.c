#include <stdio.h>
int main (void) {
              int i, j;
              int m[i];
              char c[i];

              printf("小文字のアルファベットを入力してください\n");
              scanf("%c" , &c[i]);
              for (j = 0; j < i; j++) {
                            if ( c[i] != 'x' && c[i] != 'y' && c[i] != 'z') {
                                          m[i] = (int)c[i] + 3;
                            }
                            else {
                                          m[i] = (int)c[i] - 23; 
                            }
              }
              for (j = 0; j < i; j++) {
                            printf("%c", m[i]);
              }
              printf("\n");
}