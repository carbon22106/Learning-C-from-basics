// Write a program to print the address of a variable. Use this address to get the value of the variable.

#include<stdio.h>

int main()
{
    int x = 14;
    int* ptr = &x;
    printf("Address of x : (&x) -> %p\n", &x);
    printf("Value at the address : (*&x) -> %d\n", *ptr);
    return 0;
}