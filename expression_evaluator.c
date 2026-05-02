#include <ctype.h>
#include <stdio.h>

int main() {

    double result = 0.0;  // accumulated value
    double number = 0.0;  // number being built right now
    char operator = '+';  // pending operator (starts as +)
    double decimal = 0.1; // decimal place tracker
    int in_decimal = 0;   // are we past the '.' ?
    int c;                // current character from getchar()

    printf("Enter an expression: ");

    while ((c = getchar()) != '\n') {
        if (isdigit(c)) {
            int new_digit = c - '0';

            if (in_decimal) {
                number += (decimal * new_digit);
                decimal /= 10;
            } else
                number = number * 10 + new_digit;

        } else if (c == '.')
            in_decimal = 1;
        else {
            switch (operator) {
                case '+': result += number; break;
                case '-': result -= number; break;
                case '*': result *= number; break;
                case '/': result /= number; break;
            }

            operator = c;
            number = 0;
            in_decimal = 0;
            decimal = 0.1;
        }
    }

    switch (operator) {
        case '+': result += number; break;
        case '-': result -= number; break;
        case '*': result *= number; break;
        case '/': result /= number; break;
    }

    printf("Value of expression: %.1lf", result);

    return 0;
}
