#include <stdio.h>

int countPositiveIntegers(int arr[], int size) {
    int count = 0;

    // Count positive integers in the array
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[8] = {-3, 5, -2, 8, 0, -1, 7, 4};

    // Display the array
    printf("Array: ");
    for (int i = 0; i < 8; ++i) {
        printf("%d ", arr[i]);
    }

    // Call the function to count positive integers
    int positiveCount = countPositiveIntegers(arr, 8);

    // Display the result
    printf("\nNumber of positive integers: %d\n", positiveCount);

    return 0;
}
