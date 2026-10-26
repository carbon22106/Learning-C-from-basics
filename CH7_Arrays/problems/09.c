// 9. Create a three-dimensional array and print the addresses of its elements in increasing order.

#include<stdio.h>

int main()
{
    int size = 2, array[size][size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                printf("%d:%d:%d is at %u\n", i, j, k, &array[i][j][k]);
            }
        }
    }
    return 0;
}