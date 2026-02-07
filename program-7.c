#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        rem = binary % 10;       // Extract last digit
        decimal += rem * base;   // Multiply by current power of 2
        binary /= 10;            // Remove last digit
        base *= 2;               // Update power of 2
    }

    printf("Decimal value of %d is %d\n",binary,decimal);
    return 0;
}
