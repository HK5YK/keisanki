#include <stdio.h>
int main (void)
{
    int n, i, j, k;
    printf("n = "); scanf("%d",&n);

    for (i = 0; i < n; i++){
        for (j = i; j > 0; j--){
            printf(" ");
        }
        
         for (k = n - i; k > 0; k--){
            printf("*");
         }
        
        printf("\n");
    }
}