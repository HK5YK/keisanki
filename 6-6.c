#include <stdio.h>
#include <math.h>
int main (void) {
    int a, b, c;

    printf("ax^2 + bx + c = 0 の実数解を表示する\n");
    printf("整数値a,b,cを入力してください\n");
    printf("a = "); scanf("%d", &a); 
    printf("b = "); scanf("%d", &b); 
    printf("c = "); scanf("%d", &c); 

    double d = a, e = b, f = c, y, z, g = sqrt( e * e - 4 * d * f );

    
    if ( a == 0 ) {
        if ( b != 0 ) {
            y = -f / e ;
            printf("%lf\n", y);
        } else if ( c == 0 ) {
            printf("不定\n");
        } else {
            printf("不能\n");
        }
    } else if ( g > 0 ) {
        y = ( -e + g ) / ( 2 * d ) ;
        z = ( -e - g ) / ( 2 * d ) ;
        printf ("%lf %lf\n", y, z);
    } else if ( g == 0 ) {
        y = -e / ( 2 * d ) ;
        printf("%lf\n", y);
    } else {
        printf("解無し\n");
    }
}