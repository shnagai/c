#include <stdio.h>

int main(void)
{
int num;

printf("整数を入力してください");
scanf("%d", &num);

if(num == 0)
  puts("0です");
else if (num > 0)
  puts("正です");
else
  puts("負です");
  return 0;
}
