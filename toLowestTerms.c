#include <stdio.h>

int main() {

    int numerator, denominator, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    n = numerator;
    m = denominator;

    while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d", numerator / m, denominator / m);

    return 0;
}
