```c
#include <stdio.h>

int main() {
    float price = 250.50;
    int quantity = 3;
    float total;

    total = price * quantity;

    printf("Price: %.2f\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Total: %.2f\n", total);

    return 0;
}
```

**Concept:**
`float` is used for numbers that can contain decimal values, while `int` is used for whole numbers.

**Logic:**
`total = price * quantity`

