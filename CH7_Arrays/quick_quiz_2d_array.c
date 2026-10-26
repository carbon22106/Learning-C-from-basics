// Quick Quiz Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

#include<stdio.h>

void display_array(int x, int y, int* array)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d:%d = %d\n", i, j, *array);
            array++;
        }
    }
}

int main()
{
    int x = 2, y = 2, array[x][y]; //= {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter for %d:%d : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    display_array(x, y, &array[0][0]);
    
}