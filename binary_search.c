#include <stdio.h>

void binary_search(int *numbers, int length, int target);
void binary_search_helper(int *, int, int, int);

int main() {
  int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
  int n = sizeof(list) / sizeof(list[0]);

  binary_search(list, n, 6);
  printf("\n");
  binary_search(list, n, 1);
  printf("\n");
  binary_search(list, n, 13);
  printf("\n");
  binary_search(list, n, 99);
  printf("\n");

  return 0;
}

void binary_search(int *numbers, int length, int target) {
  binary_search_helper(numbers, length, target, 0);
}

void binary_search_helper(int *numbers, int length, int target, int offset) {
  if (length <= 0) {
    printf("Number not found in the list");
    return;
  }

  int mid = length / 2;
  int *middle = &numbers[mid];

  if (*middle == target) {
    printf("%d found at index %d", target, mid + offset);
    return;
  } else if (*middle > target)
    binary_search_helper(numbers, mid, target, offset);
  else if (*middle < target)
    binary_search_helper(middle + 1, mid, target, offset + mid + 1);
}
