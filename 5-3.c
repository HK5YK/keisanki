#include <stdio.h>
int main (void)
{
    int a[20], i = 0;
    
    do {
        scanf("%d", &a[i]);

    } while (a[i++] >= 0);

    for (i = i-2; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}