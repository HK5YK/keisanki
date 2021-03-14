#include <stdio.h>
#include <string.h>

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

Student search (Student a[], int num, char *target) {
    int i, j ;

        for (i = 0; i < num; i++) {
            if (strcmp (a[i].name, target) == 0)
                j = i ;
        }
    return a[j] ;
}

int main (void) {
    int num, i, j ;
    scanf("%d", &num) ;
    Student a[num] ;

    for (i = 0; i < num ; i++) {
        read_student(&a[i]) ;
    }
    
    char *target1 = "Judy" ;
    char *target2 = "Steve" ;
    char *target3 = "Wendy" ;
    a[1] = search(a, num, target1) ;
    a[2] = search(a, num, target2) ;
    a[3] = search(a, num, target3) ;    
    
    for (j = 1; j < 4; j++) {
    printf("番号 : %03d\t", a[j].code);
    printf("名前 : %s\t", a[j].name) ;
    printf("英語の得点 : %d\t", a[j].math) ;
    printf("数学の得点 : %d\n", a[j].eng) ; 
    }
}