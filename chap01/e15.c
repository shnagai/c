#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください :");
  scanf("%d", &no);

  printf("%dに", no);
  printf("12を加えると%dです。\n", 12 + no);

  return 0;
}
