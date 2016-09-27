#include <stdio.h>

int main(void)
{
  int x, y, z;
  int sum;

  puts("3つの整数を入力してください");
  printf("整数1:"); scanf("%d", &x);
  printf("整数2:"); scanf("%d", &y);
  printf("整数3:"); scanf("%d", &z);

  sum = x + y + z;
  printf("それらの和は%dです。\n", sum);
}
