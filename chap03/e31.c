#include <stdio.h>

int main(void)
{

  int a, b;
  printf("整数を入力してください:");

  printf("A:"); scanf("%d", &a);
  printf("B:"); scanf("%d", &b);

  if (a % b)
    puts("BはAの約数ではありません。");
  else
    puts("BはAの約数です。");
  return 0;
}
