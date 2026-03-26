#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main() {

  long seconds = 57546;

  int hour, min, sec = 0;

  split_time(seconds, &hour, &min, &sec);

  printf("%.2d: %.2d: %.2d", hour, min, sec);

  return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
  *hr = total_sec / 3600;
  *min = (total_sec - (*hr * 3600)) / 60;
  *sec = total_sec - (*hr * 3600) - (*min * 60);
}
