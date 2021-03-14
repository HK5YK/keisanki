#include <stdio.h>

int count (int n, int a[], int p) {
    int i, j = 0 ;

    for (i = 0; i < n; i++) {
        if (a[i] >= p) {
            j += 1 ;
        }
    }
    return j ;
}
int main (void) {
    int a[10], i ;

    printf("10人の試験の点数を入力してください\n") ;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]) ;
    }
    printf("80点以上の人は%d人います\n", count(10, a, 80)) ;
}