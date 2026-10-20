// Write a function to calculate force of attraction on a body of mass 'm'  exerted by earth. Consider g = 9.8m/s² .

#include<stdio.h>

float forceByEarth(float mass)
{
    // f = ma = mg
    return mass * 9.8;
}

int main()
{
    float mass;
    printf("Enter Mass : ");
    scanf("%f", &mass);
    printf("%.2f N", forceByEarth(mass));
    return 0;
}