#include <stdio.h>

int binary_search(int *, int, int);

int main() {
  int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
  int n = sizeof(list) / sizeof(list[0]);

  int target = 8;

  printf("%d Found at index %d", target, binary_search(list, n, target));

  return 0;
}

int binary_search(int *arr, int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
      return mid;
    else if (arr[mid] < target)
      left = mid + 1;
    else if (arr[mid] > target)
      right = mid - 1;
  }

  return -1;
}
