#include <stdio.h>

int main(void) {

  int min, max, term, i = 0;

  printf("何cmから:"); scanf("%d", &min);
  printf("何cmまで:"); scanf("%d", &max);
  printf("何cm間隔:"); scanf("%d", &term);

  for (i = min; i <= max; i += term) {
    printf("%dcm: %.2fkg\n", i, (i -100) * 0.9);
  }


  return 0;
}
