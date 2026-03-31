/* Finds the largest and smallest elements in an array */
#include <stdio.h>
#define N 10

void max_min(int a[], int n, int *max);

int main(void) {
  int b[N], i, big;

  printf("Enter %d numbers: ", N);

  for (i = 0; i < N; i++)
    scanf("%d", &b[i]);

  max_min(b, N, &big);

  printf("Largest: %d\n", big);

  return 0;
}

void max_min(int a[], int n, int *max) {
  int i;
  *max = a[0];

  for (i = 1; i < n; i++) {
    if (a[i] > *max)
      *max = a[i];
  }
}
