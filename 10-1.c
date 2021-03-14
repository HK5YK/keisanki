#include <stdio.h>
#include <math.h>

struct complex {
    double re ;
    double im ;
} ;

void printC (struct complex a) {
    if (a.re != 0 && a.im > 0)
        printf("%lf + %lf i\n", a.re, a.im) ;
    else if (a.re != 0 && a.im < 0)
        printf("%lf %lf i\n", a.re, a.im) ;
    else if (a.re == 0 && a.im != 0)
        printf("%lf i\n", a.im) ;
    else
        printf("%lf\n", a.re) ;
}

struct complex addC (struct complex a, struct complex b) {
    struct complex c ;
    c.re = a.re + b.re ;
    c.im = a.im + b.im ;
    return c ;
}

struct complex multC (struct complex a, struct complex b) {
    struct complex c ;
    c.re = a.re * b.re - a.im * b.im ;
    c.im = a.im * b.re + a.re * b.im ;
    return c ;
}

struct complex conjC (struct complex a) {
    struct complex b ;
    b.re = a.re ;
    b.im = - a.im ;
    return b ;
}

double absC (struct complex a) {
    double abs ;
    abs = sqrt(multC(a, conjC(a)).re) ;
    return abs ;
}

struct complex divC (struct complex a, struct complex b) {
    struct complex c, div ;
    c = multC(a, conjC(b)) ;
    div.re = c.re / (absC(b) * absC(b)) ;
    div.im = c.im / (absC(b) * absC(b)) ;
    return div ;
}

int main (void) {
    struct complex a, b ;

    printf("複素数aとbの実部と虚部の値を順に入力してください\n") ;

    printf("a : ") ; scanf("%lf%lf", &a.re, &a.im) ;
    printf("b : ") ; scanf("%lf%lf", &b.re, &b.im) ;
    printf("a : ") ; printC(a) ;
    printf("b : ") ; printC(b) ;
    printf("a + b : ") ; printC(addC(a, b)) ;
    printf("a * b : ") ; printC(multC(a, b)) ;
    printf("a の共役 : ") ; printC(conjC(a)) ;
    printf("b の共役 : ") ; printC(conjC(b)) ;
    printf("|a| : ") ; printf("%lf\n", absC(a)) ;
    printf("|b| : ") ; printf("%lf\n", absC(b)) ;
    printf("a / b : ") ; printC(divC(a, b)) ;
}