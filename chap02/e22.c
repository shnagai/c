#include <stdio.h>

int main(void)
{
  puts("２つの整数を入力してください");

  int a, b;
  printf("a:"); scanf("%d", &a);
  printf("b:"); scanf("%d", &b);

  printf("それらの和は%dで積は%dです。\n", a + b, a * b);
  return 0;
}
