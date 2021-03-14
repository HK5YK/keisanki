#include <stdio.h>

int sum(char *st, char c) {
     int  sum = 0 ;
    
     while (*st) {
        if (*st == c) {
            sum++ ;
        }
        st++ ;
    }
    return sum ;
}
int main (void) {
    char st[100] ;
    char c ;
    
    printf("文字列を入力してください : ") ;
    fgets(st, 100, stdin) ;
    printf("文字を入力してください　： ") ;
    scanf("%c", &c) ;
    
    printf("%sには%cは%d個含まれています\n", st, c, sum(st, c)) ;
}