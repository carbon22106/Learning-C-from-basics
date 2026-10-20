#include<stdio.h>

int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    if (num % 97 == 0)
    {
        printf("%d is divisible by 97", num);
    } else
    {
        printf("%d is NOT divisible by 97", num);
    }
    return 0;
}