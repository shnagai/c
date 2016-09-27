#include <stdio.h>

int main(void) {
  int num, i;

  printf("整数値:"); scanf("%d", &num);

  for (i = 1; i <= num; i++) {
    putchar('*');
    if (i % 5 == 0) {
      putchar('\n');
    }
  }
  return 0;
}
