#include <stdio.h>
#include <string.h>

void my_strcat(char *dest, const char *src);

int main() {

  char word[] = "Xavier";

  char name[20] = "Ethan";

  my_strcat(name, word);

  printf("%s ", name);
  printf("%s", word);

  return 0;
}

void my_strcat(char *dest, const char *src) {
  int length = strlen(dest);
  dest += length;
  strcpy(dest, src);
}
