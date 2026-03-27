#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pointer_strcpy(char *, char *);

int main() {

  char word[] = "Balls";

  char *word_copy = malloc(strlen(word) + 1);

  pointer_strcpy(word_copy, word);

  printf("%s %s", word, word_copy);

  return 0;
}

void pointer_strcpy(char *dest, char *src) {
  while (*src != '\0') {
    *dest = *src;
    dest++, src++;
  }
  *dest = '\0';
}
