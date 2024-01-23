// 4. Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray = (int *)malloc(5 * sizeof(int));

    // Input values for the initial array
    for (int i = 0; i < 5; i++) {
        printf("Enter the value of element %d: \n", i);
        scanf("%d", &dynamicArray[i]);
    }

    // Display values stored in the initial array
    printf("Values stored in the initial array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, dynamicArray[i]);
    }

    // Reallocate memory to store 10 integers
    int *newArray = (int *)realloc(dynamicArray, 10 * sizeof(int));

    // Check if realloc was successful
    if (newArray == NULL) {
        fprintf(stderr, "Memory reallocation failed\n");
        free(dynamicArray);
        return 1;
    }

    // Input values for the additional elements in the extended array
    for (int i = 5; i < 10; i++) {
        printf("Enter the value of element %d: \n", i);
        scanf("%d", &newArray[i]);
    }

    // Display values stored in the extended array
    printf("Values stored in the extended array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i, newArray[i]);
    }

    // Free the dynamically allocated memory
    free(newArray);

    return 0;
}
