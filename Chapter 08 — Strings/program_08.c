//8. Write a program to count the occurrence of a given character in a string.

#include<stdio.h>

int charOccur(char string[], char c);

int main() {
    char string[] = "Hello World";
    int occur = charOccur(string, 'l');
    printf("The number of occurrence of %c in %s is : %d ", 'l', string, occur);
    return 0;
}

int charOccur(char string[], char c) {
    int i = 0;
    int count = 0;
    while (string[i] != '\0') {
        if (string[i] == c) {
            count++;
        }
        i++;
    }
    return count;
}


