#include <stdio.h>

int main() {

  int array[] = {1, 8, 5, 7, 2, 1, 6, 7, 8};
  int size = sizeof(array) / sizeof(array[0]);

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[i] == array[j])
        printf("%d appears more than once\n", array[i]);
    }
  }

  return 0;
}
