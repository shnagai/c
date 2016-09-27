#include <stdio.h>

int main(void) {
  int no, i;

  do {
    printf("正の整数を入力してください。");
    scanf("%d", &no);
  } while(no <= 0);

  for (i = 1; i <= no; i++) {
    switch(i % 10) {
      case 0: printf("0"); break;
      case 1: printf("1"); break;
      case 2: printf("2"); break;
      case 3: printf("3"); break;
      case 4: printf("4"); break;
      case 5: printf("5"); break;
      case 6: printf("6"); break;
      case 7: printf("7"); break;
      case 8: printf("8"); break;
      case 9: printf("9"); break;
    }
  }
  printf("\n");
  return 0;
}
