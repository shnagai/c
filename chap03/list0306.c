#include <stdio.h>

int main(void)
{
  int n1, n2;

  puts("入力");
  printf("A:"); scanf("%d", &n1);
  printf("B:"); scanf("%d", &n2);

  n1 == n2 ? puts("同じ") : puts("違う");

 return 0;
}
