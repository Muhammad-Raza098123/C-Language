#include <stdio.h>
int main() {
    int number = 10;

    printf("char        : %zu byte(s)\n", sizeof(char));
    printf("short       : %zu byte(s)\n", sizeof(short));
    printf("int         : %zu byte(s)\n", sizeof(int));
    printf("long        : %zu byte(s)\n", sizeof(long));
    printf("long long   : %zu byte(s)\n", sizeof(long long));
    printf("float       : %zu byte(s)\n", sizeof(float));
    printf("double      : %zu byte(s)\n", sizeof(double));
    printf("long double : %zu byte(s)\n", sizeof(long double));
    printf("Variable 'number' : %zu byte(s)\n", sizeof(number));

    return 0;
}

/*
What this code is doing:
Uses the sizeof operator to print how many bytes each data type (and one
variable) takes in memory.

Logic learned:
Different data types use different amounts of memory.

Important thing to understand:
sizeof gives the size in bytes and works on both types and variables.
Sizes can differ between compilers/systems (e.g. long is 4 bytes on Windows,
8 on Linux). Use %zu to print it.
*/
