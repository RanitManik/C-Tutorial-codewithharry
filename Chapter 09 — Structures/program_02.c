// Write a function SumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.

#include <stdio.h>

struct vector
{
    int x;
    int y;
};

struct vector sumOfTwoVectors(struct vector vector1, struct vector vector2);

struct vector sumOfTwoVectors(struct vector vector1, struct vector vector2)
{
    struct vector sumVector;
    sumVector.x = vector1.x + vector2.x;
    sumVector.y = vector1.y + vector2.y;
    return sumVector;
}

int main()
{
    struct vector v1, v2, sum;
    v1.x = 7;
    v1.y = 75;
    v2.x = 56;
    v2.y = 5;

    printf("x dimension is %d and y dimension is %d for v1\n", v1.x, v1.y);
    printf("x dimension is %d and y dimension is %d for v2\n", v2.x, v2.y);

    // Technique 1 ==>
    sum = sumOfTwoVectors(v1, v2);
    printf("\nFrom the first techniqueThe x dimension is: %d\nAnd the y dimension is: %d", sum.x, sum.y);

    // Technique 2 ==>
    printf("\nFrom the second technique The x dimension is: %d\nAnd the y dimension is: %d", sumOfTwoVectors(v1, v2).x, sumOfTwoVectors(v1, v2).y);

    return 0;
}
