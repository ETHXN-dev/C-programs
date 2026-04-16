#include <stdio.h>

int main() {

  FILE *file = fopen("sample.txt", "r");

  if (file == NULL) {
    printf("Could not open file!\n");
    return 1;
  }

  char line[100];

  while (fgets(line, sizeof(line), file) != NULL) {
    printf("%s", line);
  }

  fclose(file);
}
