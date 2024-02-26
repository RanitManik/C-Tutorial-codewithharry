#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, compChoice;

    // Display game menu
    printf("Choose your move:\n");
    printf("1. Snake\n");
    printf("2. Water\n");
    printf("3. Gun\n");

    // Get user choice
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &userChoice);

    // Validate user input
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice. Please choose 1, 2, or 3.\n");
        return 1;  // Exit with an error code
    }

    // Generate random computer choice
    srand(time(NULL));  // Seed for random number generation
    compChoice = rand() % 3 + 1;

    // Display user and computer choices
    printf("You chose: ");
    switch (userChoice) {
        case 1:
            printf("Snake\n");
            break;
        case 2:
            printf("Water\n");
            break;
        case 3:
            printf("Gun\n");
            break;
    }

    printf("Computer chose: ");
    switch (compChoice) {
        case 1:
            printf("Snake\n");
            break;
        case 2:
            printf("Water\n");
            break;
        case 3:
            printf("Gun\n");
            break;
    }

    // Determine the winner
    if (userChoice == compChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && compChoice == 2) || (userChoice == 2 && compChoice == 3) ||
               (userChoice == 3 && compChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
