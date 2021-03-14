#include <stdio.h>
int main (void) {
    int i[10], j, m;

    printf("整数値を10個入力してください\n");
    for (j = 0; j < 10; j++) {
        scanf("%d", &i[j]);
    }
    m = i[0];
    for (j = 1; j < 10; j++) {
        if ( i[j] > m ) {
            m = i[j];
        }
    }
    printf("最大値は%dです\n", m);
}