#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 1, num2 = 4;
    int sum = add(num1, num2);
    printf("%d", sum);
    return 0;
}