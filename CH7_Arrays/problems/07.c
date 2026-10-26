// 7. Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and 9 respectively.

#include<stdio.h>

int main()
{
    int tables_array[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                tables_array[i][j] = 2 * (j+1);
            }
            else if (i == 1)
            {
                tables_array[i][j] = 7 * (j+1);
            }
            else if (i == 2)
            {
                tables_array[i][j] = 9 * (j+1);
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
    }
    return 0;
}