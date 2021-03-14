#include <stdio.h>
int main (void){
    int y;

    printf("年yを入力してください\n");
    scanf("%d", &y);

    if ( y % 4 == 0) {
        if ( y % 100 == 0 && y % 400 != 0 ) {
            printf("%d年は平年\n", y);
        } else {
            printf("%d年はうるう年\n", y);
        }
    } else {
        printf("%d年は平年\n", y);
    }
}