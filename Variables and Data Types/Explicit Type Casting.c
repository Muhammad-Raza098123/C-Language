#include <stdio.h>
int main() {
    int math = 85, physics = 90, english = 78;
    int total = math + physics + english;

    int wrongAverage = total / 3;
    float wrongCast = (float)(total / 3);   // cast applied too late
    float correctAverage = (float)total / 3;

    printf("Total marks          : %d\n", total);
    printf("Average (int)        : %d\n", wrongAverage);
    printf("Average (late cast)  : %.2f\n", wrongCast);
    printf("Average (correct)    : %.2f\n", correctAverage);

    return 0;
}

/*
What this code is doing:
Finds the average of three subjects in three ways: plain int division, a cast
done after the division, and a cast done before the division.

Logic learned:
Type casting temporarily converts a value to another data type.

Important thing to understand:
Cast BEFORE the division: (float)total / 3. Writing (float)(total / 3) casts
too late, because the decimal part is already lost.
*/
