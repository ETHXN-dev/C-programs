#include <stdio.h>

int main() {

  float num1, num2;
  char operator;

  printf("Enter the first number numbers: ");
  scanf("%f", &num1);

  printf("Enter the second number: ");
  scanf("%f", &num2);

  // getchar is called here to consume the leftover newline character
  getchar();

  printf("Enter an operator (+, -, *, / ): ");
  operator = getchar();

  switch (operator) {
  case '/':
    if (num2 == 0) {
      printf("Cannot divide by 0!");
      break;
    }
    printf("%.2f %c %.2f is %.2f", num1, operator, num2, num1 / num2);
    break;
  case '-':
    printf("%.2f %c %.2f is %.2f", num1, operator, num2, num1 - num2);
    break;
  case '+':
    printf("%.2f %c %.2f is %.2f", num1, operator, num2, num1 + num2);
    break;
  case '*':
    printf("%.2f %c %.2f is %.2f", num1, operator, num2, num1 * num2);
    break;
  default:
    printf("Invalid operator");
    break;
  }

  return 0;
}
