#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;

    // Verify using pointer arithmetic
    if (*(ptr + 2) == arr[2]) {
        printf("(ptr+2) points to the third element of the array.\n");
    } else {
        printf("(ptr+2) does not point to the third element of the array.\n");
    }

    return 0;
}
