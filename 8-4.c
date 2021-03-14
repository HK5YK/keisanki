#include <stdio.h>

int max_of_r(int a[], int i) {
    int j ;

    if (i == 0) 
        return a[0] ;
    else {
        j = max_of_r(a, i -1) >= a[i - 1] ? max_of_r(a, i - 1) : a[i - 1] ;
    }

}

int main (void) {
    int i = 10, j ; int a[i] ;

    printf("%d人の試験の点数を入力してください\n", i) ;
    for (j = 0; j < i; j++) {
        scanf("%d", &a[j]) ;
    }
    printf("%d人の中の最大の点数は%dです\n", i, max_of_r(a, i)) ;
}