#include <stdio.h>

// Function to calculate sum of elements in an array using divide and conquer
int sumUsingDivideAndConquer(int arr[], int left, int right) {
    // Base case: If array contains only one element
    if (left == right) {
        return arr[left];
    }

    // Divide the array into two halves
    int mid = left + (right - left) / 2;

    // Recursively calculate sum for left and right halves
    int leftSum = sumUsingDivideAndConquer(arr, left, mid);
    int rightSum = sumUsingDivideAndConquer(arr, mid + 1, right);

    // Return the sum of left and right halves
    return leftSum + rightSum;
}

// Main function
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate sum using divide and conquer
    int sum = sumUsingDivideAndConquer(arr, 0, size - 1);

    // Print the sum
    printf("Sum of array elements (using divide and conquer): %d\n", sum);

    return 0;
}

