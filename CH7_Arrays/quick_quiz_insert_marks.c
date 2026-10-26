// Quick Quiz: Write a program to accept marks of five students in an array and print them on the screen.

#include<stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d : ", i);
        scanf("%d", &marks[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}