#include <stdio.h>
int main(void)
{
    int i;
    char j,k,l,m,n;

    printf("i=?\n");
    scanf("%d",&i);

    if (i >= 2019) {
        j = i - 2018;
        printf("令和%d年\n",j);
    } else if (i >= 1989) {
        k = i - 1988;
        printf("平成%d年\n",k);
    } else if (i >= 1926) {
        l = i - 1925;
        printf("昭和%d年\n",l);
    } else if (i >= 1912) {
        m = i - 1911;
        printf("大正%d年\n",m);
    } else if (i >= 1868) {
        n = i - 1867;
        printf("明治%d年\n",n);
    } else {
        printf("わかりません\n");
    }
}