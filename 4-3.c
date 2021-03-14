#include <stdio.h>
int main(void)
{
    int a[5], b[5], i, n;

    printf("サイズ5のベクトルを入力してください\n");
    for(i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    }

    printf("整数を入力してください\n");
    scanf("%d",&n);
    printf("結果：\n");
    for(i = 0; i < 5; i++){
        b[i] = n * a[i];
        printf("%d\n", b[i]);
    }
}