#include <stdio.h>

int main(void)
{

  int a, b, min, max;
  int sum = 0;
  int cnt = 0;

  puts("整数を２つ入力してください");
  printf("1つめ:"); scanf("%d", &a);
  printf("2つめ:"); scanf("%d", &b);

  if (a < b) {
    min = a;
    max = b;
  } else if (b < a) {
    min = b;
    max = a;
  }


  do {
    sum = sum + min;
    min ++;
    cnt ++;

  } while (min <= max);
  printf("%d以上%d以下の全整数の合計の和は%dです。\n", min - cnt, max, sum);

  return 0;
}
