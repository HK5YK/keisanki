#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main (void)
{
    int i;
    char st[100];
    printf("文字列を入力してください : ");
    fgets(st, 100, stdin);
    int len = strlen(st);

    for (i = 0; i < len; i++){
         if (isupper(st[i]) != 0)
         {
             printf("%c", st[i]);
         }
    }
}
