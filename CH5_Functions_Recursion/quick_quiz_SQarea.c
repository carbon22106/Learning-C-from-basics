// Use the library function to calculate the area of a square with side a

#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    printf("Enres Side of Square : ");
    scanf("%d", &side);
    int area = pow(side, 2);
    
    printf("Area of Square = %d sq units", area);
    return 0;
}