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
    double sum ;

    if (n <= 0)
       return 1 ;
    else
       return ruijo(x, n) / kaijo(n) + taylor_e(x, n - 1) ;
}
double error(double x, int n) {
    double e = exp(x) ;
    double t = taylor_e(x, n) ;
    
    double F = e >= t ? e - t: t - e ; 

    return F ;
}
int main (void) {
    int n ;
    double x = 2.0 ;

        printf("n = ") ; scanf("%d", &n) ;    
        printf("taylor_e_r = %lf     error = %lf", taylor_e(x, n), error(x, n)) ;
}