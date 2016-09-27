#include <stdio.h>

int main(void) {
  int i, j;
  int a, b;

  puts("長方形をつくります");
  printf("一辺:"); scanf("%d", &a);
  printf("一辺:"); scanf("%d", &b);

  if (a < b) {
   for (i = 1; i <= a; i++) {
    for (j = 1; j <= b; j++) {
     putchar('*');
    }
    putchar('\n');
   }
  } else {
   for (i = 1; i <= b; i++) {
    for (j = 1; j <= a; j++) {
     putchar('*');
    }
    putchar('\n');
   }
  }

  return 0;
}
