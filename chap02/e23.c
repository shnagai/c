#include <stdio.h>

int main(void)
{
  double x;

  puts("実数を入力してください");

  printf("実数x:"); scanf("%lf", &x);

  printf("あなたは%fと入力しましたね。\n", x);
  return 0;
}
