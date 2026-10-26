#include<stdio.h>

int main()
{
    int num_of_elements = 5, marks[num_of_elements];
    for (int i = 0; i < num_of_elements; i++)
    {
        printf("Enter Marks for %d : ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < num_of_elements; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}