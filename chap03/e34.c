#include <stdio.h>

int main(void)
{
  int a,b;

  puts("２つの整数を入力してください");
  printf("A:"); scanf("%d", &a);
  printf("B:"); scanf("%d", &b);

  if (a == b)
    puts("等しい");
  else if (a > b)
    puts("Aの方が大きい");
  else
    puts("Bの方が大きい");
  return 0;
}
