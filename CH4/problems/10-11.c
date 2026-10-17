// Write a program to check whether a given number is prime or not using loops.

#include<stdio.h>

int main()
{
    int num;
    printf("Num : ");
    scanf("%d", &num);

    
    for (int i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not prime (for)\n", num);
            break;
        }
        else {printf("%d is prime (for)\n", num); break;}
    }


    int i = 2;
    while (i < num/2)
    {
        if (num % i == 0)
        {
            printf("%d is not prime (while)\n", num);
            break;
        }
        else
        {
            printf("%d is prime (while)\n", num);
            break;
        }
        i++;
    }


    i = 2;
    do
    {
        if (num % i == 0)
        {
            printf("%d is not prime (do while)\n", num);
            break;
        }
        else
        {
            printf("%d is prime (do while)\n", num);
            break;
        }
        i++;
    } while (i < num/2); 

    return 0;
}