#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char word[50];

  fgets(word, sizeof(word), stdin);

  int vowels = 0;
  int length = strlen(word);

  for (int i = 0; i < length; i++) {
    switch (tolower(word[i])) {
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
