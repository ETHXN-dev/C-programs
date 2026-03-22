#include <stdio.h>

typedef struct {
  int age;
  char *name;
} PERSON;

int main() {

  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      printf("%s, ", "FizzBuzz");
    } else if (i % 5 == 0) {
      printf("%s, ", "Buzz");
    } else if (i % 3 == 0) {
      printf("%s, ", "Fizz");
    } else {
      printf("%d, ", i);
    }
  }

  return 0;
}
