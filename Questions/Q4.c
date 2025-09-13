// Q4. Write a program to find the quotient and remainder of two integers using arithmetic operators.

#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}