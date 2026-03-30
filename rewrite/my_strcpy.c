#include <stdio.h>
#include <string.h>

void my_strcpy(char *, char *);

int main() {
  char word[] = "Ethan";
  char word2[strlen(word) + 1];

  my_strcpy(word2, word);

  printf("%s %s", word, word2);

  return 0;
}

void my_strcpy(char *dest, char *src) {
  while (*src != '\0') {
    *dest = *src;
    dest++, src++;
  }
  *dest = '\0';
}
