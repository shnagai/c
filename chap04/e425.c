#include <stdio.h>

int main(void) {
  int i, j ,len;

  puts("下向き数字ピラミッドをつくります。");
  printf("何段ですか?:"); scanf("%d", &len);

  for (i = 1; i <= len; i++) {
    for (j = 1; j < i; j++) {
     putchar(' ');
    }
    for (j = 1; j <= (len - i) *2 +1; j++) {
     printf("%d", i % 10);
    }
    putchar('\n');
  }
  return 0;
}
