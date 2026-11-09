#include <stdio.h>
int main() {
    float fValue = 0.1f;
    double dValue = 0.1;

    printf("float  0.1 : %.20f\n", fValue);
    printf("double 0.1 : %.20f\n", dValue);

    float bigFloat = 123456789.0f;
    double bigDouble = 123456789.0;

    printf("\nfloat  123456789 : %.1f\n", bigFloat);
    printf("double 123456789 : %.1f\n", bigDouble);

    return 0;
}

/*
What this code is doing:
Stores the same numbers in a float and a double and prints them with many
decimal digits to compare how accurately each one holds the value.

Logic learned:
Choosing between float and double depends on how much precision you need.

Important thing to understand:
float keeps about 6-7 correct digits, double about 15-16. Decimal values
like 0.1 are only approximately stored, so never expect exact equality when
comparing floating-point numbers.
*/
