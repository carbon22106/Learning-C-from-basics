// Write a program to calculate the factorial of a given number using a for  loop

#include<stdio.h>

int main()
{
    int n , factorial = 1;
    printf("N : ");
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++) // or (int i = n; i; i--)
    for (int i = n; i; i--)
    {
        factorial *= i;
    }
    printf("Factorial = %d\n", factorial);
    return 0;
}