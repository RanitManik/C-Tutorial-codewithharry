//Which of the following is used to appropriately read a multi-word string-
//Gets()
//Puts()
//Printf()
//Scanf()

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a multi-word string: ");
    gets(str); // Use gets to read a multi-word string
    printf("You entered: %s\n", str);
    return 0;
}
