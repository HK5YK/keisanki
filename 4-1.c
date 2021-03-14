#include <stdio.h>
int main(void)
{
    int n, i, s = 1;

    printf("n=?\n");
    scanf("%d", &n);

        for(i = 1; i < n + 1; i++) {
            s = i * s;
        }
    printf("n!=%d\n", s);
}