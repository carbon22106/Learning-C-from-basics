// Write a program to print the value of a variable i  by using a pointer to pointer type variable.

#include<stdio.h>

int main()
{
    int i = 1400;
    int* j = &i;
    int** k = &j;

    printf("Value at k : (**k) -> %d", **k);
    return 0;
}