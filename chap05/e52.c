#include <stdio.h>

int main(void) {
  int i;
  int v[5];

  for (i = 0; i < 5; i++) {
    switch(i) {
      case 0: v[i] = 5; break;
      case 1: v[i] = 4; break;
      case 2: v[i] = 3; break;
      case 3: v[i] = 2; break;
      case 4: v[i] = 1; break;
    }
  }
  for (i = 0; i < 5; i++) {
    printf("v[%d] = %d\n", i ,v[i]);
  }
  return 0;
}
