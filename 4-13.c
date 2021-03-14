/* 1〜10までの乱数を10000回生成した平均は5.5と予想される */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
              int i ,s=0;

              srand(time(NULL));

              for (i = 0; i < 10000; i++){
                   int num = rand () % 10 + 1; 
                   s = s + num;
              }
              printf("%lf", s / 10000.0);
}