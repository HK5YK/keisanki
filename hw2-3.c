#include <stdio.h>

int gcd (int a, int b) {
              if (a == 0 || b == 0) return 0 ;
              else if (a < b && b % a == 0) return a ;
              else if (a < b && b % a != 0) return gcd (b % a, a) ;
              else if (a == b) return a ;
              else if (b < a && a % b == 0) return b ;
              else return gcd (a % b, b) ;
}
int lcm (int a, int b) {
              int m ;
              if (gcd (a, b) != 0) m = a * b / (double) gcd(a, b) ;
              else m = 0 ;
              return m ;  
}
int main (void) {
              int k, l ;
              printf("2つの非負整数k,lを入力してください\n") ;
              printf("k : ") ; scanf("%d", &k) ;
              printf("l : ") ; scanf("%d", &l) ;
              if (lcm(k, l) != 0)
                  printf("%dと%dの最大公約数は%d,最小公倍数は%dです\n", k, l, gcd(k, l), lcm(k, l)) ;
              else printf("%dと%dの最大公約数は%d,最小公倍数は存在しません\n", k, l, gcd(k, l)) ;
}