#include <stdio.h>
int main() {
    int x = 10, y = 20;
    int temp;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Approach 1: using a temporary variable
    temp = x;
    x = y;
    y = temp;
    printf("After swap (temp variable): x = %d, y = %d\n", x, y);

    // Approach 2: without a third variable
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swap again (no temp): x = %d, y = %d\n", x, y);

    return 0;
}

/*
What this code is doing:
Swaps the values of x and y first with a temporary variable, then again
without one using addition and subtraction.

Logic learned:
How a variable's value is stored, overwritten and reused.

Important thing to understand:
Assigning x = y destroys the old value of x, so save it first (temp).
The no-temp method works here, but the temp method is safer and clearer.
*/
