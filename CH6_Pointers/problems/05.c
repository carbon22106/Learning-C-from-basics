// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

/*
My First interpretation :

#include<stdio.h>

void sum_and_avg(int* a, int* b) // Uses pointers, finds sum and avg.
{
    // Sum
    printf("Sum = %d\n", *a + *b);
    // Average
    printf("Average = %d\n", (*a + *b)/2.0);
}

int main()
{
    int x = 10, y = 30;
    sum(&x, &y);
    avg(&x, &y);
    return 0;
}
*/

// Harrys interpretation...

#include<stdio.h>

int* sum(int a, int b)
{
    int sum = a + b;
    int* ptr = &sum;
    return ptr;
}

float* avg(int a, int b)
{
    float avg = (a + b)/2.0;
    float* ptr = &avg;
    return ptr;
}

int main()
{
    int x = 10, y = 30;
    // sum(&x, &y);
    // avg(&x, &y);

    printf("Sum = %d\n", *sum(x, y));
    printf("Average = %.2f\n", *avg(x, y));

    return 0;
}