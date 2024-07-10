#include <stdio.h>

int countBinaryDigits(int n) {
    if (n == 0) return 1;  // Special case for number 0 (its binary representation is "0", so 1 digit)

    int count = 0;
    while (n > 0) {
        n = n / 2;
        count++;
    }
    return count;
}

int main() {
    int decimalNumber;

    // Input the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Calculate the number of binary digits
    int numDigits = countBinaryDigits(decimalNumber);

    // Output the result
    printf("Number of digits in the binary representation: %d\n", numDigits);

    return 0;
}

