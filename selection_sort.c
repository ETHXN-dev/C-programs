#include <stdio.h>

int *get_min(int *, int);
void swap(int *, int *);
void selection_sort(int *, int);

int main() {

  int numbers[] = {7, 2, 5, 4, 1, 6, 0, 3};
  int n = sizeof(numbers) / sizeof(numbers[0]);

  printf("Unsorted array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  selection_sort(numbers, n);

  printf("Sorted array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}

int *get_min(int *numbers, int n) {
  int *min = numbers;

  for (int i = 0; i < n; i++) {
    if (numbers[i] < *min)
      min = numbers + i;
  }

  return min;
}

void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void selection_sort(int *numbers, int n) {
  for (int i = 0, iterations = n; i < iterations - 1; i++) {
    int *min = get_min(numbers, n);
    swap(min, numbers);
    numbers++, n--;
  }
}
