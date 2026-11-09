#include <stdio.h>
#include <limits.h>
int main() {
    printf("int range      : %d to %d\n", INT_MIN, INT_MAX);
    printf("short range    : %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("char range     : %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned int   : 0 to %u\n", UINT_MAX);

    unsigned char small = 255;
    printf("\nunsigned char before: %d\n", small);
    small = small + 1;
    printf("unsigned char after adding 1: %d\n", small);

    return 0;
}

/*
What this code is doing:
Prints the minimum and maximum values of different data types using limits.h,
then shows an unsigned char going past its maximum (255) and wrapping to 0.

Logic learned:
Every data type has a fixed range; going beyond it gives a wrong result.

Important thing to understand:
Unsigned types wrap around to 0 after the maximum. For signed types (like
int), overflow is undefined behaviour, so choose a data type big enough for
your values.
*/
