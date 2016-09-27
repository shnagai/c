#include <stdio.h>

int main(void)
{
  int i = 2, no, beki;

  printf("正の整数を入力してください:");
  scanf("%d", &no);


  while(i <= no) {
    printf("%d\n", i);
    i *= 2;
  }
  return 0;
}
