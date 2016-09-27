#include <stdio.h>

int main(void)
{
  int n1,n2,sa;

  puts("２つの整数を入力してください");
  printf("A:"); scanf("%d",&n1);
  printf("B:"); scanf("%d",&n2);


  if (n1 > n2)
    sa = n1 -n2;
  else
    sa = n2 -n1;

  printf("それらの差は%dです\n", sa);
  return 0;
}
