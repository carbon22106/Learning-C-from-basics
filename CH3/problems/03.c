// 2.5 - 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%

#include<stdio.h>

int main()
{
    float income, tax;
    printf("Income : ");
    scanf("%f", &income);
    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000)*0.05;
    }
    else if (income <= 1000000)
    {
        tax = (500000 - 250000)*0.05 + (income - 500000)*0.2;
    }
    else
    {
        tax = (500000 - 250000)*0.05 + (1000000 - 500000)*0.2 + (income - 1000000)*0.3;
    }

    printf("Tax = %.2f", tax);

    return 0;
}