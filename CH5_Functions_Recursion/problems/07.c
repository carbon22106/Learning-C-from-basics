/*
Write a program using function to print the following pattern (first n  lines):
at n = 3:

*
***
*****
*/

#include<stdio.h>

int print_stars(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2*i)+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("N : ");
    scanf("%d", &n);
    print_stars(n);
    return 0;
}