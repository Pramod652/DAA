#include <stdio.h>

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d:\n", n);
    printf("%d, %d", first, second); // Print the first two numbers

    next = first + second;
    while (next <= n) {
        printf(", %d", next);
        first = second;
        second = next;
        next = first + second;
    }

    printf("\n");
}

int main() {
    int value;

    // Input the value up to which Fibonacci series should be generated
    printf("Enter a value to generate Fibonacci series up to: ");
    scanf("%d", &value);

    // Generate and print Fibonacci series
    fibonacciSeries(value);

    return 0;
}
