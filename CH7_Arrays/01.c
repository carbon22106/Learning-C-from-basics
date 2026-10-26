#include<stdio.h>

int main()
{
    int marks[10];
    marks[1] = 1;
    marks[2] = 10;
    marks[3] = 100;
    marks[9] = 1000;

    printf("%d, %d, %d, %d", marks[1], marks[2], marks[3], marks[9]);
    return 0;
}