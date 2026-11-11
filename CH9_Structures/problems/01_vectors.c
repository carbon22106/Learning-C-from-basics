// Create a two-dimensional vector using structures in C.

#include<stdio.h>

typedef struct vector2d
{
    int i, j;
} vector2;


int main()
{
    vector2 v1 = {10, 20};
    printf("v1 : %di + %dj", v1.i, v1.j);
    return 0;
}