#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください");
  scanf("%d", &no);

  switch (no % 3) {
    case 0 : puts("その数は3で割り切れます"); break;
    case 1 : puts("その数は1あまります"); break;
    case 2 : puts("その数は2あまります"); break;
  }
  return 0;
}
