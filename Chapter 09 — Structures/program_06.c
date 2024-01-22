// 5. Write a program with a structure representing a Complex number.

#include <stdio.h>

struct Complex {
    int real, complex;
};

// Function prototype declarations
void displayComplex(struct Complex *ptr);
void inputComplex(struct Complex array[], int size);

// Function definition to take input of 5 complex numbers
void inputComplex(struct Complex array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("You are inputting for index %d of array now\n", i);
        printf("Enter the value of the real part: ");
        scanf("%d", &array[i].real);
        printf("Enter the value of the complex part: ");
        scanf("%d", &array[i].complex);
    }
}

// Function definition to display a complex number
void displayComplex(struct Complex *ptr) {
    printf("Complex Number: %d + %di\n", ptr->real, ptr->complex);
}

int main() {
    // Declare a complex number
    struct Complex comp1;
    comp1.real = 45;
    comp1.complex = 54;

    // Define an array which will store 5 complex numbers
    struct Complex complexNumber[5];

    // Input the complex numbers
    inputComplex(complexNumber, 5);

    // Display the complex numbers
    printf("Displaying complex numbers:\n");
    for (int i = 0; i < 5; i++) {
        displayComplex(&complexNumber[i]);
    }

    return 0;
}
