// 6. Write a program containing functions which counts the number of positive integers in an array.

#include<stdio.h>

int count_positive(int size, int* arr)
{
    int positive = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0){
            positive++;
        }
    }
    return positive;
}

int main()
{
    int array[10] = {0, -2, 3, 0, 5, 6, -7, 8, -9, 10}; // 7 +ve
    printf("Number of Positive Elements = %d", count_positive(10, array));
    return 0;
}