#include <stdio.h>

void sort2(int *n1, int *n2) {
    int a ;
    if (*n1 > *n2) {
       a = *n1 ;
       *n1 = *n2 ;
       *n2 = a ; 
    }
}
void sort3(int *n1, int *n2, int *n3) {
    sort2(n1, n2) ;
    sort2(n2, n3) ;
    sort2(n1, n2) ;
}
int main(void) {
    int n1, n2, n3 ;
    printf("整数n1,n2,n3を入力してください\n") ;
    printf("n1 = ") ; scanf("%d", &n1) ;
    printf("n2 = ") ; scanf("%d", &n2) ;
    printf("n3 = ") ; scanf("%d", &n3) ;
    sort3(&n1, &n2, &n3) ;
    printf("n1 = %d\n", n1) ;
    printf("n2 = %d\n", n2) ;
    printf("n3 = %d\n", n3) ;
}