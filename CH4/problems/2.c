// Write a program to print multiplication table of 10 in reversed order.

#include<stdio.h>

int main()
{
    int num, range;
    num = range = 10;
    for (int i = range; i; i--)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}