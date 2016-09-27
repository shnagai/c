#include <stdio.h>

int main(void)
{
  int a, b, c, d, max;
  puts("3つの整数を入力してください");
  printf("A:"); scanf("%d", &a);
  printf("B:"); scanf("%d", &b);
  printf("C:"); scanf("%d", &c);
  printf("D:"); scanf("%d", &d);

  max = a > b ? a : b;

  if (max < c)
    max = c;
    if (max < d)
      max = d;
  else if (max < d)
    max = d;

  printf("最大値は%dです", max);
  return 0;
}
