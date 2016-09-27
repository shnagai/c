#include <stdio.h>

int main(void) {
  int i,x;

  for (i = 0; i + 1 <= 10; i++) {
    /*if (i == 0) {
      printf("    |");
    } else if (i == 9) {
      printf("%3d\n", i);
    } else {
      printf("%3d", i);
    }*/
    if (i == 0) {
      printf("   |");
    } else if (i == 1){
      printf("---+---------------------------\n");
      printf("%3d|", i);
    } else {
      printf("%3d|", i);
    }
    for (x = 1; x <= 9; x++) {
      if (i == 0) {
        printf("%3d", (i + 1) * x);
      } else {
        printf("%3d", i * x);
      }
    }
    putchar('\n');
  }
  return 0;
}
