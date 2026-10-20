#include<stdio.h>

int add(int, int);

int main()
{
    add(2, 8);
    add(12, 8);
    add(2, 98);
}

int add(int a, int b)
{
    printf("The sum is : %d\n", a + b);
    return a+b;
}