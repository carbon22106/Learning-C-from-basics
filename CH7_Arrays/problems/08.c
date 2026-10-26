/*
7. Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and 9 respectively.
8. Repeat problem 7 for a custom input given by the user.
*/

#include<stdio.h>

int main()
{
    int nums[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Element %d to Multiply With : ", i+1);
        scanf("%d", &nums[i]);
    }

    int tables_array[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                tables_array[i][j] = nums[i] * (j+1);
            }
            else if (i == 1)
            {
                tables_array[i][j] = nums[i] * (j+1);
            }
            else if (i == 2)
            {
                tables_array[i][j] = nums[i] * (j+1);
            }
            // hard coding because of random values 2, 7 and 9.
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d:%d = %d\n", i, j, tables_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}