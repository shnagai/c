#include <stdio.h>

int main(void)
{
  int i, no;

  printf("正の整数を入力してください:");
  scanf("%d", &no);

  i = 1;

  while(i <= no) {
    printf("%d\n", i++);
  }
  return 0;
}
