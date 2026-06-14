#include <stdio.h>

void merge(int a[], int, int, int);
void merge_sort(int a[], int, int);

int main() {

    int a[] = {5, 1, 6, 9, 4, 10, 2, 8, 3, 7};
    int size = sizeof(a) / sizeof(a[0]);

    merge_sort(a, 0, size - 1);

    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);

    return 0;
}

void merge(int arr[], int beg, int mid, int end) {
    int i = beg;
    int j = mid + 1;
    int index = 0;
    int temp[end - beg + 1];

    while ((i <= mid) && (j <= end)) {
        if (arr[i] < arr[j])
            temp[index++] = arr[i++];
        else
            temp[index++] = arr[j++];
    }

    while (i <= mid)
        temp[index++] = arr[i++];

    while (j <= end)
        temp[index++] = arr[j++];

    for (int k = beg; k <= end; k++)
        arr[k] = temp[k - beg];
}

void merge_sort(int arr[], int beg, int end) {
    if (beg < end) {
        int mid = (beg + end) / 2;
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid + 1, end);

        merge(arr, beg, mid, end);
    }
}
