#include <stdio.h>

void swap(int *a, int *b);

int main() {

  int x = 5, y = 20;

  swap(&x, &y);

  printf("%d %d", x, y);

  return 0;
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
