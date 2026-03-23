#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(char s[]);

int main() {

  char word[] = "Xavier";

  printf("%s", isPalindrome(word) ? "Palindrome" : "Not Palindrome");

  return 0;
}

bool isPalindrome(char s[]) {
  bool palindrome = true;
  for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    if (s[i] != s[j]) {
      palindrome = false;
      break;
    }
  }
  return palindrome;
}
