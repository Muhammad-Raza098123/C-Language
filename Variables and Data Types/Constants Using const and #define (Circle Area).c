#include <stdio.h>
#define PI 3.14159
int main() {
    const int radius = 5;

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    printf("Radius        : %d\n", radius);
    printf("Area          : %.2f\n", area);
    printf("Circumference : %.2f\n", circumference);

    // radius = 10;   // ERROR: cannot change a const variable

    return 0;
}

/*
What this code is doing:
Uses a #define constant (PI) and a const variable (radius) to calculate the
area and circumference of a circle.

Logic learned:
Values that must never change should be stored as constants.

Important thing to understand:
#define is a text replacement done before compiling (no data type, no
semicolon). const creates a real variable with a data type that cannot be
modified after initialization.
*/
