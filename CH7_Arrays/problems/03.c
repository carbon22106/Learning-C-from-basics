// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2)  points to the third element where ptr  is a pointer pointing to the first element of the array.
// 3. Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include<stdio.h>

int main()
{
    int table[10];
    for (int i = 1; i < 11; i++)
    {
        table[i-1] = 5*i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", table[i]);
    }
    return 0;
}