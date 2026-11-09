#include <stdio.h>
int main() {
    char letter = 'a';
    char digitChar = '7';

    printf("Character      : %c\n", letter);
    printf("ASCII value    : %d\n", letter);
    printf("Uppercase      : %c\n", letter - 32);
    printf("Next character : %c\n", letter + 1);

    int digitValue = digitChar - '0';
    printf("\nCharacter '%c' as a number: %d\n", digitChar, digitValue);
    printf("Number + 5 = %d\n", digitValue + 5);

    return 0;
}

/*
What this code is doing:
Prints a char as a character and as its ASCII number, converts a lowercase
letter to uppercase using arithmetic, and converts the digit character '7'
into the integer 7.

Logic learned:
A char is stored as a small integer (its ASCII code), so you can do
arithmetic on it.

Important thing to understand:
'a' = 97, 'A' = 65, '0' = 48. The same char prints as a letter with %c and
as a number with %d. Use ch - '0' to turn a digit character into a number.
*/
