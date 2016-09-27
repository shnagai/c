#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください:");
  scanf("%d", &no);

  if (no)
    puts("noは0ではありません");
  else
    puts("noは0です");

  return 0;
}
