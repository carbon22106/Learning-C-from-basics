// Try problem 3 using call by value and verify that it does not change the value of the variable.
// Q3 : Write a program to change the value of a variable to ten times its current value.

#include<stdio.h>

void ten_times(int a)
{
    a *= 10;
    printf("Function : %d\n", a);
}

int main()
{
    int x = 14;

    printf("Old Main : %d\n", x);

    ten_times(x);

    printf("New Main : %d\n", x); // Not Changed
    
    return 0;
}