//What will the following line produce in a C program: printf(“%d %d %d\n”,a,++a,a++);

#include<stdio.h>

int main() {
    int a = 5;

    // The order of evaluation is undefined, and the behavior is unspecified
    printf("%d %d %d\n", a, ++a, a++); // output ==> 7 7 5
    //    The behavior of this expression is undefined because the order of evaluation of function arguments is not specified in the C language. Different compilers may produce different results, and the output is unpredictable. It's recommended to avoid such expressions to ensure well-defined behavior.
    return 0;
}
