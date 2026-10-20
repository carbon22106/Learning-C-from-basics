// Write a recursive function to calculate the sum of first 'n'  natural numbers.

#include<stdio.h>

int sum_natural(int n)
{
    /*
    sn(0) = 0
    sn(1) = 0+1 = sn(0) + 1 = 1
    sn(2) = 1+2 = sn(1) + 2 = 3
    sn(3) = 1+2+3 = sn(2) + 3 = 6
    sn(n) = 1+2+3+4+....+n = sn(n-1) + n
    */
   if (n == 0 || n == 1)
   {
    return n;
   }
   return sum_natural(n-1) + n;
}

int main()
{
    int n;
    printf("N : ");
    scanf("%d", &n);

    printf("%d", sum_natural(n));

    return 0;
}