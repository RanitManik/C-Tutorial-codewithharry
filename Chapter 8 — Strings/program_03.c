//3. Write your own version of strlen function from `<string.h>`
#include<stdio.h>
#include <string.h>

int main() {
    char string[100];
    printf("Enter a string you want to length of: ");
    gets(string);
    printf("The length of the given string input is: %d", strlen(string));
}


