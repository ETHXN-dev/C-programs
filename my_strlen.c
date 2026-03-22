#include <stdio.h>

int my_strlen(char string[]);

int main() {

  char name[] = "Ethan";

  printf("%d", my_strlen(name));

  return 0;
}

int my_strlen(char string[]) {
  int length = 0;

  while ((*string) != '\0') {
    length += 1;
    string++;
  }
  return length;
}
