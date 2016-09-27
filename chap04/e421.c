#include <stdio.h>

int main(void) {
  int i, x, num;

  printf("正方形をつくります。\n");
  printf("何段ですか:"); scanf("%d", &num);

  for (i = 1; i <= num; i++) {
    for (x = 1; x <= num; x++) {
    putchar('*');
    }
    putchar('\n');
  }
  return 0;
}
