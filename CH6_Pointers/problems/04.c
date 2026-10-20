// Write a function and pass the value by reference.

#include<stdio.h>

void refrence(int* a)
{
    printf("Address recived = %p\n", a);
}

int main()
{
    int x;
    printf("Address Main = %p\n", &x);
    refrence(&x);
    return 0;
}