#include <stdio.h>

void reverseArray(int arr[], int size) {
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        // Swap elements at i and j
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }

    // Call the function to reverse the array
    reverseArray(arr, 5);

    // Display the reversed array
    printf("\nReversed Array: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
