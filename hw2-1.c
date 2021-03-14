#include <stdio.h>

int P (int a, int b) {
              int c ;
              for (c = 3; c < b + 1; c++) {
                            if (a * a == b * b + c * c) 
                            return c ;
              }
}
int Q (int a, int b) {
              int c ;
              for (c = 3; c < b + 1; c++) {
                            if (a * a == b * b + c * c) 
                            return b ;
              }
}
int main (void) {
              int i, j, k, l, n, s = 0, t = 0 ;
              printf("正整数nを入力してください : ") ; scanf("%d", &n) ;
              printf("各辺の長さが%d以下の整数である直角三角形を列挙すると次の通り\n", n) ;
              for (i = 5; i < n + 1; i++) {
                            for (j = 4; j < i; j++) {
                            if (i * i == P(i, j) * P(i, j) + Q(i, j) * Q(i, j)) {
                            printf("%d %d %d\n", P(i, j), Q(i, j), i) ;
                            s++ ;
                            }     
                            }                     
              }
              printf("合計%d個\n", s) ;
              
              printf("各辺の長さが20以下の整数である直角三角形を列挙すると次の通り\n") ;
              for (k = 5; k <= 20; k++) {
                            for (l = 4; l < k; l++) {
                            if (k * k == P(k, l) * P(k, l) + Q(k, l) * Q(k, l)) {
                            printf("%d %d %d\n", P(k, l), Q(k, l), k) ;
                            t++ ;
                            }
                            }
              }
              printf("合計%d個\n", t) ;
}