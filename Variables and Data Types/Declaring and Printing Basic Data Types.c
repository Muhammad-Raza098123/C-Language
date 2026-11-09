#include <stdio.h>
int main() {
    int age = 19;
    float gpa = 3.5f;
    double pi = 3.14159265358979;
    char grade = 'A';

    printf("Age   : %d\n", age);
    printf("GPA   : %.2f\n", gpa);
    printf("Pi    : %.10f\n", pi);
    printf("Grade : %c\n", grade);

    return 0;
}

/*
What this code is doing:
Declares one variable each of type int, float, double and char, gives them
values, and prints them with the matching format specifier.

Logic learned:
Every data type has its own kind of value and its own format specifier.

Important thing to understand:
%d = int, %f = float/double, %c = char. A wrong specifier prints garbage.
Float constants end with f (3.5f); a plain 3.5 is a double.
*/
