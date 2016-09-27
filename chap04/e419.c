#include <stdio.h>

int main(void) {
  int i, n, x = 0;

  printf("整数値:");
  scanf("%d", &n);

  for (i =1; i <= n; i++) {
    if (n % i == 0) {
      printf("%d", i);
      putchar('\n');
      ++x;
    }
  }

  printf("約数の個数は%d個です。\n", x);
  return 0;
}
