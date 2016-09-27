#include <stdio.h>

int main(void)
{
  int a, b, dif;

  puts("値を2つどうぞ");
  printf("1つめ:"); scanf("%d", &a);
  printf("2つめ:"); scanf("%d", &b);

  dif = a - b;
  if ((a > b && a - b <= 10) || (a < b && b - a <=10))
    puts("差は10以下");
  else
    puts("差は11以上");
  return 0;
}
