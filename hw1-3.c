#include <stdio.h>
#include <math.h>

double ruijo(double x, int k) {
    if (k == 0) 
        return 1.0 ;
    else
        return ruijo(x, k - 1) * x ;  
}
int kaijo(int k) {
    if (k == 0) 
        return 1 ;
    else
        return kaijo(k - 1) * k ;
}
double taylor_e (double x, int n) {
    int k ;
    double sum = 0.0 ;

    for (k = 0; k <= n; k++) {
        sum += ruijo(x, k) / kaijo(k) ;     
    }
        return sum ;
}
double error(double x, int n) {
    double e = exp(x) ;
    double t = taylor_e(x, n) ;
    
    double E = e >= t ? e - t: t - e ; 

    return E ;
}
int main (void) {
    int n ;
    double x = 2.0 ;

    printf("n     taylor_e(2.0, n)     error\n") ;
   
    for (n = 0; n <= 20; n++) {
            
            printf("%d     %lf             %lf\n", n, taylor_e(x, n), error(x, n)) ;
        }
}  