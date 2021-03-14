#include <stdio.h>
#include <math.h>
int main(void)
{
    int x;

    printf("角度は全て単位・度 ( °) を省略している\n");

    for (x = 0.0; x <= 180.0; x = x + 5.0){
        printf("sin%d = %lf\n", (int)x, sin (x / 180.0 * M_PI));
    }
    for (x = 0.0; x<= 180.0; x = x + 5.0){
        printf("cos%d = %lf\n", (int)x, cos (x / 180.0 * M_PI));
    }
}