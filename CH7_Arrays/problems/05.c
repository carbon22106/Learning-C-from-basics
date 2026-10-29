// Write a program containing a function which reverses the array passed to it.

#include<stdio.h>

void reverse_array(int size, int* arr)
{
    int returned[size];
    int* last_index_of_arr = arr + (size - 1);
    for (int i = 0; i < size; i++)
    {
        returned[i] = *last_index_of_arr;
        last_index_of_arr--;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = returned[i]; // *(arr+i) = *(returned+i)
    }
}

int main()
{
    int size;
    printf("SIZE : ");
    scanf("%d", &size);
    // int array[4] = {1, 2, 3, 4}, return_array[size];
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Element %d : ", i);
        scanf("%d", &array[i]);
    }

    reverse_array(size, array);

    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d = %d\n", i, array[i]);
    }
    return 0;
}