#include <stdio.h>

int main(void)
{
  double vx, vy;

  puts("２つの実数を入力してください。");
  printf("vx:"); scanf("%lf", &vx);
  printf("vy:"); scanf("%lf", &vy);

  printf("vx + vy = %f\n", vx + vy);
  printf("vx - vy = %f\n", vx - vy);
  printf("vx * vy = %f\n", vx * vy);
  printf("vx / vy = %f\n", vx / vy);

  return 0;
}
