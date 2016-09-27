#include <stdio.h>

int main(void)
{
  int retry;

  do {
    int no;

    printf("整数を入力してください:");
    scanf("%d", &no);

    if (no % 2)
      puts("その値は奇数です");
    else
      puts("その値は偶数です");

    printf("もう一度?【Yes:0/No9】 :");
    scanf("%d", &retry);
  } while (retry ==0);

  return 0;
}
