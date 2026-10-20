// Write a program to print multiplication table of a given number n 

#include<stdio.h>

int main()
{
    int num, range;
    printf("Num : ");
    scanf("%d", &num);
    printf("Range (0 = infinite) : ");
    scanf("%d", &range);

    if (range == 0) 
    {
        int j = 1;
        while (1)
        {
            printf("%d x %d = %d\n", num, j, num*j);
            j++;
        }
        
    }
    else {
        for (int i = 1; i<= range; i++)
        {
            printf("%d x %d = %d\n", num, i, num*i);
        }
    }
    return 0;
}