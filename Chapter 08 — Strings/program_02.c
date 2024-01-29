//2. Write a program to take a string as an input from the user using `%c` and `%s`. Confirm that the strings are equal.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20]; // Declare str2 as an array of characters

    printf("Enter string 1: \n");
    scanf("%s", str1); // Use %s for string input

    printf("String 1 is %s\n", str1);

    printf("Enter string 2: \n");

    int i = 0;
    char c = '\0';
    while (c != '\n') {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i - 1] = '\0';

    printf("String 1 and 2 are %s and %s\n", str1, str2);

    int a = strcmp(str1, str2); // Comparing both strings
    printf("Comparison result: %d\n", a);

    return 0;
}
