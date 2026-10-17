// Write a program to calculate the sum of the numbers occurring in the multiplication table of 8 (consider 8 x 1 to 8 x 10)

#include<stdio.h>

int main()
{
    
    int a = 8, n = 1, d = 8, sum, i;
    printf("N : ");
    scanf("%d", &n);
    // without loop, using AP
    // sum = (n/2 -> this will be 0.5 but wil be stored as 0 because both are int types.)*(2*a + (n-1)*d);
    sum = (n*(2*a + (n-1)*d))/2;
    printf("Sum (no loop) = %d\n", sum);
    // with loop
    while (i <= n)
    {
        sum += a * i;
    }

    printf("Sum (loop) : %d", sum);
    

    return 0;
}