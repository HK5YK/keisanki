#include <stdio.h>
int main (void)
{
    int n, i, j, k;

    printf("n = "); scanf("%d", &n);

    for ( i = 1; i < n + 1; i++ ){
        for ( j = n - i; j > 0; j-- ){
            printf(" ");
        }
        for ( k = 1; k < i + 1; k++ ){    
        printf("*");
       }
        printf("\n");
    }
}