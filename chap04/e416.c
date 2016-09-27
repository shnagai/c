#include <stdio.h>

int main(void) {
  int num, i;

  printf("整数値:"); scanf("%d", &num);
  for (i = 1; i <= num; i++) {
    if (i % 2) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
