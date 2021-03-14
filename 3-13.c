#include <stdio.h>
int main(void)
{
  int a, b ;
  
  printf("a=?\n");
  scanf("%d", &a);
  printf("b=?\n");
  scanf("%d", &b);
  
  if (a % b == 0) {
      printf("%dは%dの約数です\n", b,a);
  } else {
      printf("%dは%dの約数ではありません\n",b,a);
  }
}