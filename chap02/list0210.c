#include <stdio.h>

int main(void)
{
  int a, b;

  puts("2つの整数を入力して下さい");
  printf("a:"); scanf("%d", &a);
  printf("b:"); scanf("%d", &b);

  printf("それらの平均は%fです\n", (double)(a + b) / 2.0);
  return 0;
}
