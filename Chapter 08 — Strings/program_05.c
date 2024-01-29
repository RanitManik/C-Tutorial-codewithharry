//5. Write your own version of `strcpy` function from <string.h>

#include<stdio.h>

char *myStrcpy(char str2[], char str1[]) {
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    return str2;
}

int main() {
    char str1[100] = "This is a test for my version of strcpy from string.h library in C";
    char str2[100];

    // copying str1 values to str2
    myStrcpy(str2, str1);
    printf("%s", str2);
}