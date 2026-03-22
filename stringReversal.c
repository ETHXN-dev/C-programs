#include <stdio.h>
#include <string.h>

/* char [] is giving us access to modify the characters , char * only gives us
the location to the string while the string is read only memory */

void reverse(char string[]);

int main() {
  char s[] = "Ethan";
  reverse(s);
  printf("%s", s);
}

void reverse(char string[]) {
  for (int i = 0, j = strlen(string) - 1; i < j; i++, j--) {
    char temp = string[i];
    string[i] = string[j];
    string[j] = temp;
  }
};
