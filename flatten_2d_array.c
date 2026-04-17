#include <stdio.h>
#include <stdlib.h>

int main() {

  int nums[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

  int size = sizeof(nums) / sizeof(int);
  int rows = sizeof(nums) / sizeof(nums[0]);
  int columns = sizeof(nums[0]) / sizeof(int);

  int *flat_array = malloc(sizeof(int) * size);

  int k = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++)
      flat_array[k++] = nums[i][j];
  }

  for (int i = 0; i < size; i++)
    printf("%d ", flat_array[i]);

  printf("\n");

  free(flat_array);

  return 0;
}
