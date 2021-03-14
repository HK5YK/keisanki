#include <stdio.h>
int main (void){
    int x, y, t;
    printf("x:\n"); scanf("%d", &x);
    printf("y:\n"); scanf("%d", &y);
    
    printf("交換前: x=%d, y=%d\n", x, y);
    
    t = x;
    x = y;
    y = t;

    printf("交換後:x=%d, y=%d\n", x, y);
}