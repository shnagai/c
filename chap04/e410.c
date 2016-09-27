#include <stdio.h>

int main(void)
{
  int num;
  int i = 1;
 printf("正の整数を入力してください:"); scanf("%d", &num);

 while (num-- > 0) {
   printf("*\n");
 }

  return 0;
}
