#include <stdio.h>

int main(void) {
  int i, j ,len;

  puts("ピラミッドをつくります。");
  printf("何段ですか?:"); scanf("%d", &len);

  for (i =1; i <= len; i++) {
    for (j = len; j > i; j--) {
     putchar(' ');
    }
    for (j =0; j < (i - 1) *2 +1; j++) {
     putchar('*');
    }
    putchar('\n');
  }
  return 0;
}
