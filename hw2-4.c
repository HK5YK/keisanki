#include <stdio.h>

int gcd (int a, int b) {
              if (a == 0 || b == 0) return 0 ;
              else if (a < b && b % a == 0) return a ;
              else if (a < b && b % a != 0) return gcd (b % a, a) ;
              else if (a == b) return a ;
              else if (b < a && a % b == 0) return b ;
              else return gcd (a % b, b) ;
}
typedef struct rational {
              int num ;
              int denom ;
} Rational ;
void reduce (Rational r) {
              int a ;
              if (gcd(r.num, r.denom) != 0 && gcd(r.num, r.denom) != 1) {
                            int a = gcd (r.num, r.denom) ;
                            r.num /= a ;
                            r.denom /= a ;              
              }
              if (r.num % r.denom == 0) printf("%d\n", r.num / r.denom) ;
              else printf("%d / %d\n", r.num, r.denom) ;
}
Rational mult_rat (Rational r1, Rational r2) {
              Rational r3 ;
              r3.num = r1.num * r2.num ;
              r3.denom = r1.denom * r2.denom ;
              return r3 ;
}
Rational add_rat (Rational r1, Rational r2) {
              Rational r4 ;
              r4.num = r2.denom * r1.num + r1.denom * r2.num ;
              r4.denom = r1.denom * r2.denom ;
              return r4 ;
} 
int main (void) {
              Rational r1, r2 ;
              
              printf("2つの有理数r1,r2を入力してください\n") ;
              printf("r1の分子 : ") ; scanf("%d", &r1.num) ;
              printf("r1の分母 : ") ; scanf("%d", &r1.denom) ;
              printf("r2の分子 : ") ; scanf("%d", &r2.num) ;
              printf("r2の分母 : ") ; scanf("%d", &r2.denom) ;
              
              printf("%d / %d と %d / %d の積 : ", r1.num, r1.denom, r2.num, r2.denom) ; 
              reduce(mult_rat(r1, r2)) ;
              printf("%d / %d と %d / %d の和 : ", r1.num, r1.denom, r2.num, r2.denom) ;
              reduce(add_rat(r1, r2)) ;
}