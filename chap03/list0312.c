#include <stdio.h>

int main(void)
{
  int n1, n2, max;

  puts("２つの整数を入力してください");
  printf("A:"); scanf("%d", &n1);
  printf("B:"); scanf("%d", &n2);

  if (n1 > n2) max = n1; else max = n2;

  printf("値の大きいのは%dです", max);
  return 0;
}
