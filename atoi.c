#include <stdio.h>
#include <string.h>

int stringToInt(char s[], int);

int main() {

  char word[] = "3657";
  int size = strlen(word);

  int num = stringToInt(word, size);

  printf("%d", num);

  return 0;
}

int stringToInt(char s[], int n) {
  int num = 0;

  for (int i = 0; i < n; i++)
    num = num * 10 + (s[i] - '0');

  return num;
}
