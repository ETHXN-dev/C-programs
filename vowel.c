#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {

  char s[50];
  int vowels = 0;

  fgets(s, sizeof(s), stdin);

  for (int i = 0; i < strlen(s) - 1; i++) {
    int lower = tolower(s[i]);

    switch (lower) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      vowels++;
      break;
    }
  }

  printf("%d", vowels);

  return 0;
}
