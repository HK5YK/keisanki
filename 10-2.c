#include <stdio.h>

typedef struct student {
    int code ;
    char name[100] ;
    int math ;
    int eng ;
} Student ;

void read_student(Student *s) {
    scanf("%d", &s->code) ;
    scanf("%s", s->name) ;
    scanf("%d", &s->math) ;
    scanf("%d", &s->eng) ;
}

Student max_eng (Student a[], int num) {
    int i, j = 0, M = a[0].eng ;
    
    for (i = 0; i < num; i++) {
        if ( a[i].eng > M) {
           M = a[i].eng ;
           j = i ;
        }
    }
    return a[j] ;
}

double ave_math (Student a[], int num, int b) {
    int i = 0, j, sum = 0 ;

    for (i = 0; i < num; i++) {
        if (a[i].eng >= b) {
                j += 1 ;
                sum += a[i].math ;
        }
    }
    return (double) sum / j ;
}

int main (void) {
    int num, i ;
    scanf("%d", &num) ;
    Student a[num] ;
    for (i = 0; i < num ; i++) {
        read_student(&a[i]) ;
    }
        
        printf("英語が最高得点の人の情報は次の通り\n") ;
        printf("番号 : %03d\t", max_eng(a, num).code) ;
        printf("名前 : %s\t", max_eng(a, num).name) ;
        printf("英語の得点 : %d\t", max_eng(a, num).math) ;
        printf("数学の得点 : %d\n", max_eng(a, num).eng) ;
        
        printf("英語が50点以上の学生の数学の平均点 : %lf", ave_math(a, num, 50)) ;
}