#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, char *src);

int main() {

  char name[] = "Ethan";

  char name_copy[strlen(name) + 1];

  my_strcpy(name_copy, name);

  printf("%s", name_copy);

  return 0;
}

void my_strcpy(char *dest, char *src) {
  for (int i = 0; i <= strlen(src); i++) {
    dest[i] = src[i];
  }
}
