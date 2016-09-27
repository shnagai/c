#include <stdio.h>

int main(void)
{
  int n1, n2, max, min;

  puts("２つの整数を入力してください");
  printf("A:"); scanf("%d", &n1);
  printf("B:"); scanf("%d", &n2);

  if (n1 > n2) {
    max = n1;
    min = n2;
  } else {
    max = n2;
    min = n1;
  }

  printf("big=%d,small=%d", max, min);

  return 0;
}
