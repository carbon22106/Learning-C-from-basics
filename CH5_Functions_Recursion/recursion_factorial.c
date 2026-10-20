#include<stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else return n * factorial(n-1);
}

int main()
{
    int num;
    printf("Num : ");
    scanf("%d", &num);

    printf("Factorial = %d", factorial(num));

    return 0;
}