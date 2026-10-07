```c
#include <stdio.h>

int main() {
    float celsius = 25;
    float fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Celsius: %.2f\n", celsius);
    printf("Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
```

**Concept:**
`float` is useful when calculations can produce decimal values.

**Logic:**
The Celsius value is stored in `celsius`, then the formula uses that variable to calculate Fahrenheit.

