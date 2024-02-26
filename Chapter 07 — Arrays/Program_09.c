#include <stdio.h>

int main() {
    int arr[2][3][4];  // 3D array with dimensions 2x3x4

    // Display the addresses of elements in increasing order
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                printf("Address of arr[%d][%d][%d]: %p\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}
