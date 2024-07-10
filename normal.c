#include <stdio.h>

// Function to calculate sum of elements in an array using a loop
int sumUsingLoop(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Main function
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate sum using loop
    int sum = sumUsingLoop(arr, size);

    // Print the sum
    printf("Sum of array elements (using loop): %d\n", sum);

    return 0;
}

