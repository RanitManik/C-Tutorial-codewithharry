#include <stdio.h>

// structure definition
struct structure
{
    int x, y;
};

// function prototype
void arrowOperator(struct structure *ptr);

// function definition
void arrowOperator(struct structure *ptr)
{
    ptr->x = 10;
    ptr->y = 15;
}

int main()
{
    struct structure str1;
    str1.x = 15;
    str1.y = 20;

    arrowOperator(&str1);

    // Now str1.x should be 10 and str1.y should be 15
    printf("The value of x is %d and The value of y is %d", str1.x, str1.y);

    return 0;
}
