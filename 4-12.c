#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, a[5];
    double x = 0.0;

    printf("サイズ5の配列aを入力してください\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++){
         x = x + a[i] * a[i];
    }
    printf("aのユークリッドノルムは%lfです\n", sqrt(x));
} 