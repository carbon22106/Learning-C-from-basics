// Write a program using function to find average of three numbers.

#include<stdio.h>

float average(int a, int b, int c)
{
    return (a + b + c)/3.0;
}

int main()
{
    printf("%f", average(3, 6, 5));
    return 0;
}