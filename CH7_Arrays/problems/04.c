/*
3. Write a program to create an array of 10 integers and store multiplication table of 5 in it.
4. Repeat problem 3 for a general input provided by the user using scanf 
*/

#include<stdio.h>

int main()
{
    int table[10], num;
    printf("NUM : ");
    scanf("%d", &num);
    for (int i = 1; i < 11; i++)
    {
        table[i-1] = num*i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", table[i]);
    }
    return 0;
}