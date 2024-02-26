#include <stdio.h>

int main() {
    char character;

    // Get user input for the character
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is lowercase
    if (character >= 'a' && character <= 'z') {
        printf("%c is a lowercase character.\n", character);
    } else {
        printf("%c is not a lowercase character.\n", character);
    }

    return 0;
}
