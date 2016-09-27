#include <stdio.h>

int main(void)
{

  int retry;

  do {
  int num;

  printf("整数を入力してください");
  scanf("%d", &num);

  if(num == 0)
    puts("0です");
  else if (num > 0)
    puts("正です");
  else
    puts("負です");

  printf("まだ続けるY(0)/N(9)"); scanf("%d", &retry);
  } while (retry ==0);
  return 0;
}
