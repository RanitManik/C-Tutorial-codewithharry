//4. Write a function `slice()` to slice a string. It should change the original string such that it is now the sliced strings. Take m and n as the start and ending position for slice.

#include <stdio.h>

char *slice(int m, int n, char *string) {
    int i = 0;
    while (i + m < n && string[i + m] != '\0') {
        string[i] = string[i + m];
        i++;
    }
    string[i] = '\0';
    return string;
}

int main() {
    char str[] = "Hello World";
    slice(2, 8, str);
    printf("%s", str);
    return 0;
}
