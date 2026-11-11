// Write a program with a structure representing a complex number.
// Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user.
// Write problem 5's structure using typedef keywords.
#include<stdio.h>

typedef struct complexNum
{
    int real, complex;
}complexNum;

void printComplex(complexNum a)
{
    printf("%d + %di\n", a.real, a.complex);
}

int main()
{
    complexNum arr[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Real of arr[%d] : ", i+1);
        scanf("%d", &arr[i].real);
        printf("Complex of arr[%d] : ", i+1);
        scanf("%d", &arr[i].complex);
    }

    for(int i = 0; i < 5; i++)
    {
        printComplex(arr[i]);
    } 

    return 0;
}