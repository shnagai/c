#include <stdio.h>

int main(void)
{
  int x;

  printf("身長を入力してください:"); scanf("%d", &x);
  printf("標準体重は%.1fです。\n", (double)(x - 100) * 0.9);
  return 0;
}

