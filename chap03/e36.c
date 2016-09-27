#include <stdio.h>

int main(void)
{
  int a, b, c, min;
  puts("3つの整数を入力してください");
  printf("A:"); scanf("%d", &a);
  printf("B:"); scanf("%d", &b);
  printf("C:"); scanf("%d", &c);

  min = a < b ? a : b;

  if (c < min)
    min = c;

  printf("最小値は%dです", min);
  return 0;
}
