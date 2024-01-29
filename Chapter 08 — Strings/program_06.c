//6. Write a program to encrypt a string by adding 1 to the ASCII value of its characters.

#include<stdio.h>

char *encrypt(char str[]);

char *encrypt(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        str[i]++;
        i++;
    }
    return str;
}

int main() {
    char c[] = "Ranit Manik";
    encrypt(c);
    printf("The encrypted code is:\n%s\n", c);
    return 0;
}

