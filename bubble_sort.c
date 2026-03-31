#include <stdio.h>

void bubble_sort(int *, int);
void swap(int *, int *);

int main() {

  int numbers[] = {7, 2, 5, 4, 1, 6, 0, 3};
  int n = sizeof(numbers) / sizeof(numbers[0]);

  printf("Unsorted array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  bubble_sort(numbers, n);

  printf("Sorted array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}

void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void bubble_sort(int *numbers, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (numbers[j] > numbers[j + 1])
        swap(&numbers[j], &numbers[j + 1]);
    }
  }
}
