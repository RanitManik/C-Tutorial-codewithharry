// Create a two-dimensional vector using structures in C.

#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 7;
    v1.y = 75;
    v2.x = 56;
    v2.y = 5;

    printf("x dimension is %d and y dimension is %d for v1\n", v1.x, v1.y);
    printf("x dimension is %d and y dimension is %d for v2\n", v2.x, v2.y);

        return 0;
}