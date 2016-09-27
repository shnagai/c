#include <stdio.h>

int main(void)
{
  int a, b;

  printf("２つの整数を入力してください\n");
  printf("整数a:\n"); scanf ("%d", &a);
  printf("整数b:\n"); scanf ("%d", &b);

  printf("aをbで割ると%dあまり%dですね\n", a / b, a % b);

  return 0;
}
