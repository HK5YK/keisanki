#include <stdio.h>
int main(void)
{
    int n, i, s = 1;

    printf("n=?\n");
    scanf("%d",&n);

for(i = 1; i < n+1; i++){
        s = 2 * s;
    }

    printf("%d",s);
}