#include <stdio.h>

int main(void)
{
  int n1, n2;

  puts("２つの整数を入力してください");
  printf("1:"); scanf("%d", &n1);
  printf("2:"); scanf("%d", &n2);

  if (n1 == n2)
    puts("same");
  else
    puts("not same");
  return 0;
}
