#include <stddef.h>
#include <stdio.h>

void swap(int *, int *);
int partition(int *, int, int);
void quick_sort(int *, int, int);

int main() {

    int nums[] = {6, 4, 7, 3, 2, 9, 1, 8, 5};
    size_t size = sizeof(nums) / sizeof(nums[0]);

    printf("Before sorting: \n");
    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);
    printf("\n\n");

    quick_sort(nums, 0, size - 1);

    printf("\nAfter sorting: \n");
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

int partition(int *arr, int low, int high) {

    int pivot = arr[high];
    int j = low;

    for (int i = low; i < high; i++) {
        if (arr[i] <= pivot) {
            swap(&arr[i], &arr[j]);
            j++;
        }
    }

    swap(&arr[j], &arr[high]);

    return j;
}

void quick_sort(int *arr, int low, int high) {
    if (low >= high)
        return;

    int pivot = partition(arr, low, high);

    quick_sort(arr, low, pivot - 1);
    quick_sort(arr, pivot + 1, high);
}
