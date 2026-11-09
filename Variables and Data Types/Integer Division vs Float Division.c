#include <stdio.h>
int main() {
    int celsius = 37;

    int wrongResult = celsius * (9 / 5) + 32;       // 9/5 becomes 1
    float correctResult = celsius * (9.0f / 5) + 32; // 9.0f/5 becomes 1.8

    printf("Wrong  (integer division): %d F\n", wrongResult);
    printf("Correct (float division) : %.1f F\n", correctResult);

    int a = 7, b = 2;
    printf("\n7 / 2     = %d\n", a / b);
    printf("7 %% 2     = %d\n", a % b);
    printf("7.0 / 2   = %.2f\n", 7.0 / b);

    return 0;
}

/*
What this code is doing:
Converts 37 C to Fahrenheit two ways: once with integer division (wrong) and
once with float division (correct). Then shows 7/2 in both styles.

Logic learned:
The result of an operation depends on the data types of its operands.

Important thing to understand:
int / int always gives an int (decimal part is thrown away). If at least one
operand is float/double, the result is float/double.
*/
