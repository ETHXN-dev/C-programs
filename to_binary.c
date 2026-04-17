#include <stdio.h>

int main() {

  int decimal_number;

  printf("Enter a number: ");
  scanf("%d", &decimal_number);

  int binary_numbers[32] = {0};

  int i = 0;
  while (decimal_number != 0) {
    binary_numbers[i] = decimal_number % 2;
    decimal_number /= 2;
    i++;
  }

  printf("Your number in binary is: ");
  for (int j = i - 1; j >= 0; j--)
    printf("%d", binary_numbers[j]);

  return 0;
}
