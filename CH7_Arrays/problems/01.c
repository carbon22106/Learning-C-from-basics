// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2)  points to the third element where ptr  is a pointer pointing to the first element of the array.

#include<stdio.h>

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr = &numbers[1];
    printf("First Element (%u) = %d\n", ptr, *ptr);
    printf("Element at ptr+2 (%u) = %d\n", ptr+2, *ptr+2);
    // Yes from the first element ptr+2 is pointing to the third element.
    return 0;
}
