//7. Write a program to decrypt the string encrypted using the encrypt function in problem 6.
#include <stdio.h>
#include <string.h>

char *encrypt(char str[]);
char *decrypt(char str[]);

char *encrypt(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        str[i]++;
        i++;
    }
    return str;
}

char *decrypt(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        str[i]--;
        i++;
    }
    return str;
}

int main() {
    char c[] = "Ranit Manik";

    // Make a copy of the original string before encryption
    char original[100];
    strcpy(original, c);

    encrypt(c);
    printf("The encrypted code is:\n%s\n", c);

    // Decrypt the copied original string
    decrypt(original);
    printf("The decrypted code is:\n%s\n", original);

    return 0;
}
