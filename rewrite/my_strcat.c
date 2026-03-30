#include <stdio.h>
#include <string.h>

void my_strcat(char *, char *);

int main() {
  char word[50] = "Xavi";
  char word2[] = "Ethan";

  my_strcat(word, word2);

  printf("%s %s", word, word2);

  return 0;
}

void my_strcat(char *dest, char *src) {
  dest += strlen(dest);
  while (*src != '\0') {
    *dest = *src;
    src++, dest++;
  }
  *dest = '\0';
}
