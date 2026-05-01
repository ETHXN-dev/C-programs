#include <stddef.h>
#include <stdio.h>

void swap(int *, int *);
void insertion_sort(int[], size_t);

int main() {

    int nums[] = {7, 6, 5, 4, 3, 2, 1};
    size_t size = sizeof(nums) / sizeof(nums[0]);

    printf("Before sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);

    insertion_sort(nums, size);

    printf("\n\nAfter sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);
    printf("\n");

    return 0;
}

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void insertion_sort(int arr[], size_t size) {
    if (size < 2)
        return;

    for (size_t i = 1; i < size; i++) {
        int key = arr[i]; // Element to be inserted
        int j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert key at correct position
    }
}
