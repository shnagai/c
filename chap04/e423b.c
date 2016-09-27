#include <stdio.h>

int main(void) {
  int i, j ,len;

  puts("左上直角二等辺三角形をつくります。");
  printf("短辺:"); scanf("%d", &len);

  for (i =1; i <= len; i++) {
    for (j = len; j >= i; j--) {
     putchar('*');
    }
    for (j =0; j < i -1; j++) {
     putchar(' ');
    }
    putchar('\n');
  }
  return 0;
}
