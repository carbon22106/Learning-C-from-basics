/*
01
Addition of a number to a pointer.
02
Subtraction of a number from a pointer.
03
Subtraction of one pointer from another.
04
Comparison of two pointer variables.

Quick Quiz: Try these operations on another variable by creating pointers in a separate program.
Demonstrate all the four operations.
*/

#include<stdio.h>

int main()
{
    int i = 10, j = 20;
    int* ptr_i = &i;
    int* ptr_j = &j;

    printf("ptr_i = %u\n", ptr_i);
    printf("ptr_j = %u\n\n", ptr_j);

    ptr_i = &i;
    printf("++ptr_i = %u\n", ++ptr_i);
    ptr_i = &i;
    printf("--ptr_i = %u\n\n", --ptr_i);

    ptr_i = &i;
    printf("ptr_i - ptr_j = %d\n", ptr_i - ptr_j);
    printf("ptr_i - ptr_j = %d\n\n", ptr_j - ptr_i);

    printf("ptr_i > ptr_j = %d\n", ptr_i > ptr_j);
    printf("ptr_i == ptr_j = %d\n", ptr_i == ptr_j);
    printf("ptr_i < ptr_j = %d\n", ptr_i < ptr_j);

    return 0;
}