#include <stdio.h>

int main(void)
{
  int x, y;
  int seki;

  puts("２つの整数を入力してください");
  printf("整数1:"); scanf("%d", &x);
  printf("整数2:"); scanf("%d", &y);

  seki = x * y;
  printf("それらの積は%dです。\n", seki);
}
