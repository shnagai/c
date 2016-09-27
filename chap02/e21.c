#include <stdio.h>

int main(void)
{
  int a, b;

  printf("２つの整数を入力してください\n");
  printf("整数a:\n"); scanf ("%d", &a);
  printf("整数b:\n"); scanf ("%d", &b);


  /* %出す時は左のオペランドを100倍する　数学力不足だ、、*/
  printf("aの値はbの%d%%です。\n", 100 * a / b );

  return 0;
}
