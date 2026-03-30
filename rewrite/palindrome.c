#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(char *);

int main() {
  char word[] = "tacocat";

  printf("%d", isPalindrome(word));

  return 0;
}

bool isPalindrome(char *s) {
  bool palindrome = true;
  for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    if (s[i] != s[j]) {
      palindrome = false;
      break;
    }
  }
  return palindrome;
}
