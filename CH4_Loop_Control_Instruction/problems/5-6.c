// Write a program to sum first ten natural numbers using while  loop.
// im using AP

#include<stdio.h>

int main()
{
    int n, d = 1, a = 1, sum;
    printf("N : ");
    scanf("%d", &n);
    // without loop
    sum = ((n)*(2*a + (n-1)*d))/2;
    printf("Sum (no loop) : %d\n", sum);


    // with loop
    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum (for) : %d\n", sum);


    int i = 1;
    sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum (while) : %d\n", sum);


    sum = i = 0;
    do {
        sum += i;
        i++;
    } while (i <= n);
    printf("Sum (do while) : %d\n", sum);

    return 0;
}