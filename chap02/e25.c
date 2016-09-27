#include <stdio.h>

int main(void)
{
  int x, y;

  puts("２つの整数を入力してください");

  printf("a:"); scanf("%d", &x);
  printf("b:"); scanf("%d", &y);

  printf("aの値はbの%f%%です。\n", (double)(100 * x) / (double)y);
  return 0;
}
