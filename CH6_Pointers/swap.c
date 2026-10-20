#include<stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 50, y = 100;
    printf("Not Swaped : %d, %d\n", x, y);
    
    swap(&x, &y);

    printf("Swapped : %d, %d", x, y);
    return 0;
}