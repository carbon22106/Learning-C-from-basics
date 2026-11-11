// Write a function sumVector  which returns the sum of two vectors passed to it. The vectors must be two-dimensional.

#include<stdio.h>

typedef struct vector2d
{
    int i, j;
} vector2;

vector2 sumVector(vector2 a, vector2 b)
{
    return (vector2){a.i + b.i, a.j + b.j};
}

int main()
{
    vector2 v1 = {10, 20};
    vector2 v2 = {20, 20};
    printf("v1 : %di + %dj\n", v1.i, v1.j);
    printf("v2 : %di + %dj\n", v2.i, v2.j);

    vector2 vec_sum = sumVector(v1, v2);

    printf("v1 + v2 = %di + %dj", vec_sum.i, vec_sum.j);
    return 0;
}
