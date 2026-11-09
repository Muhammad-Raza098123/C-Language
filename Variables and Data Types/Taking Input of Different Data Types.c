#include <stdio.h>
int main() {
    char initial;
    int age;
    float height;
    double marks;

    printf("Enter your initial: ");
    scanf(" %c", &initial);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in feet: ");
    scanf("%f", &height);

    printf("Enter your total marks: ");
    scanf("%lf", &marks);

    printf("\n--- Student Record ---\n");
    printf("Initial : %c\n", initial);
    printf("Age     : %d\n", age);
    printf("Height  : %.2f ft\n", height);
    printf("Marks   : %.2f\n", marks);

    return 0;
}

/*
What this code is doing:
Reads a char, int, float and double from the user using scanf and then
prints them back as a small record.

Logic learned:
Each data type needs the correct specifier in scanf, and the variable
address (&) must be given.

Important thing to understand:
scanf uses %f for float but %lf for double (printf uses %f for both).
The space in " %c" skips leftover newline characters from earlier input.
*/
