//3. Write your own version of strlen function from `<string.h>`

#include <stdio.h>

int my_strlen(char str[]) {
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
        count++;
    }
    return count;
}

int main() {
    // Example usage
    char *exampleString = "Hello, World!";
    int length = my_strlen(exampleString);

    printf("Length of the string: %d\n", length);

    return 0;
}
