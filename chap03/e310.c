#include <stdio.h>

int main(void)
{
  int a, b, c;

  puts("値を3つどうぞ");
  printf("1つめ:"); scanf("%d", &a);
  printf("2つめ:"); scanf("%d", &b);
  printf("3つめ:"); scanf("%d", &c);

  if (a == b && a == c)
    puts("3つひとしい");
  else if (a == b || a == c || b == c)
    puts("2つ等しい");
  else
    puts("全部違うわ");
  return 0;
}
