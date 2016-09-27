#include <stdio.h>

int main(void)
{
  int a;

  puts("整数を入力してください");

  printf("整数"); scanf("%d", &a);

  if (a > 0)
    if (a <= 10)
      puts("10以内の数が入力されたのでOk");
    else
      puts("NG 10以内を入力せよ");
  else if (a == 0)
    puts("0は無効です");
  else
    puts("正の数を入力してください");
  return 0;
}
