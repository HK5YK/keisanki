#include <stdio.h>
int main (void) {
    int n;

    printf("nを入力してください\n");
    scanf("%d", &n);

    switch (n % 7){
        case 0 : printf("%d日後は金曜日です\n", n); break;
        case 1 : printf("%d日後は土曜日です\n", n); break;
        case 2 : printf("%d日後は日曜日です\n", n); break;
        case 3 : printf("%d日後は月曜日です\n", n); break;
        case 4 : printf("%d日後は火曜日です\n", n); break;
        case 5 : printf("%d日後は水曜日です\n", n); break;
        case 6 : printf("%d日後は木曜日です\n", n); break;
    }
}