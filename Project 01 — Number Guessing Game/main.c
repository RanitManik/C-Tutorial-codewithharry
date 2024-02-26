#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed for random number generation
    srand(time(NULL));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");

    do {
        // Get user's guess
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);

        // Increment the number of attempts
        attempts++;

        // Provide feedback to the user
        if (guess > number) {
            printf("Lower number please.\n");
        } else if (guess < number) {
            printf("Higher number please.\n");
        } else {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        }

    } while (guess != number);

    return 0;
}
