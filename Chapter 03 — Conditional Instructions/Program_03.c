#include <stdio.h>

int main() {
    float income, tax = 0;

    // Get user input for income
    printf("Enter your income: ");
    scanf("%f", &income);

    // Calculate tax based on income slabs
    if (income > 10.0) {
        tax = income * 0.30;
    } else if (income > 5.0) {
        tax = income * 0.20;
    } else if (income >= 2.5) {
        tax = income * 0.05;
    }

    // Display calculated tax
    printf("Income Tax: %.2f\n", tax);

    return 0;
}
