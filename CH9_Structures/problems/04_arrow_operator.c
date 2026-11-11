// Write a program to illustrate the use of arrow operator ->  in C.


#include<stdio.h>

typedef struct vector2d
{
    int i, j;
} vector2;

vector2 square_vector(vector2 vec)
{
    return (vector2){vec.i*vec.i, vec.j*vec.j};
}

int main()
{
    vector2 v1 = {10, 20};
    vector2 v1_sq = square_vector(v1);
    vector2* ptr_v1_sq = &v1_sq;

    printf("No Arrow -> ptr_v1_sq = %di + %dj\n", (*ptr_v1_sq).i, (*ptr_v1_sq).j);
    printf("Arrow -> ptr_v1_sq = %di + %dj", ptr_v1_sq->i, ptr_v1_sq->j);
    return 0;
}