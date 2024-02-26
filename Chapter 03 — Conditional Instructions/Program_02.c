#include <stdio.h>

int main() {
    int subj1, subj2, subj3;

    // Get user input for marks in three subjects
    printf("Enter marks for Subject 1: ");
    scanf("%d", &subj1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &subj2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &subj3);

    // Calculate total percentage
    float totalPercentage = (subj1 + subj2 + subj3) / 3.0;

    // Check pass or fail criteria
    if (totalPercentage >= 40 && subj1 >= 33 && subj2 >= 33 && subj3 >= 33) {
        printf("Congratulations! You passed.\n");
    } else {
        printf("Sorry, you failed.\n");
    }

    return 0;
}
