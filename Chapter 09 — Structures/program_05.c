#include <stdio.h>

// Define the structure with 'typedef'
struct Complex {
    int real, complex;
};

// Function prototype declaration
void displayComplex(struct Complex *ptr);  

// Function definition to display a complex number
void displayComplex(struct Complex *ptr) {
    printf("Complex Number: %d + %di\n", ptr->real, ptr->complex);
}

int main() {
    // Declare a complex number
    struct Complex comp1;
    comp1.real = 45;
    comp1.complex = 54;

    // Display the complex number
    displayComplex(&comp1);

    return 0;
}
