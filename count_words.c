#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main() {

  int word_count = 0;

  FILE *file = fopen("sample.txt", "r");

  if (file == NULL) {
    printf("Error: could not read file!\n");
    return 1;
  }

  int c = fgetc(file);

  bool in_word = false;

  while (c != EOF) {
    if (isspace(c))
      in_word = false;
    else {
      if (!in_word) {
        word_count++;
      }
      in_word = true;
    }

    c = fgetc(file);
  }

  printf("%d", word_count);

  fclose(file);

  return 0;
}
