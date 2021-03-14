#include <stdio.h>
int main (void) {
    int a,b,c;

    printf("3つの整数を入力してください。　\n");
    scanf("%d%d%d", &a, &b, &c);

    int r = a;
    if ( a >= b && b >= c) {
        r = b;
    }
    if ( a >= c && c >= b) {
        r = c;
    }
    if ( b >= c && c >= a) {
        r = c;
    }
    if ( c >= b && b >= a) {
        r = b;
    }
    printf("真ん中の値は%dです　\n", r);
}