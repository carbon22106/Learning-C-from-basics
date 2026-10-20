#include<stdio.h>

int sum(int a, int b) // This function cannot change x because only copy of x is given.
{
    a = 6; // only change in the local scope.
    return a + b;
}

int sum_change_x(int* a, int* b)
{
    *a = 100;
    return *a + *b;
}

int main()
{
    int x = 10, y = 20;

    printf("sum(x = a = 6 always) x + y = %d\n", sum(x, y));
    printf("X (global) = %d\n", x);

    printf("sum_change_x(x = a = 100 always) x + y = %d\n", sum_change_x(&x, &y));
    printf("X (global) = %d\n", x);

    return 0;
}