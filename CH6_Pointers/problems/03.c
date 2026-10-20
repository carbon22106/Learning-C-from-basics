// Write a program to change the value of a variable to ten times its current value.

#include<stdio.h>

void ten_times(int* a)
{
    *a *= 10;
}

int main()
{
    int x = 14;

    printf("Old : %d\n", x);
    
    // If the question is exactly what it says... but i think it wants us to create a function insted.
    // x *= 10; 

    ten_times(&x);

    printf("New : %d\n", x); // Same variable, different values.
    return 0;
}