//9. Write a program to check whether a given character is present in a string or not.

#include<stdio.h>
#include <stdbool.h>

bool charOccur(char string[], char c);

int main() {
    char string[] = "Hello World";
    char c;

    printf("Enter the character you want to find presence of: ");
    scanf("%c", &c);

    int occur = charOccur(string, c);
    printf("The occurrence of %c in %s is : %d ", c, string, occur);
    return 0;
}

bool charOccur(char string[], char c) {
    int i = 0;
    bool charOccur = false;
    while (string[i] != '\0') {
        if (string[i] == c) {
            charOccur = true;
            return charOccur;
        }
        i++;
    }
    return false;
}


