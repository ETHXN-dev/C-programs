#include <stdio.h>

void swap(int *, int *);
void bubble_sort(int *, int);

int main() {

  int nums[] = {6, 3, 1, 4, 2, 7, 5};
  int size = sizeof(nums) / sizeof(nums[0]);

  for (int i = 0; i < size; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");

  bubble_sort(nums, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");

  return 0;
}

void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void bubble_sort(int *numbers, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (numbers[j] > numbers[j + 1])
        swap(&numbers[j], &numbers[j + 1]);
    }
  }
}
