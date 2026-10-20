// Write a function to convert Celsius temperature into Fahrenheit.

#include<stdio.h>

float celsiusToFahrenheit(float celsius)
{
    return ((celsius/5.0)*9) + 32;
}

int main()
{
    float celsius;
    printf("Enter deg Celsius : ");
    scanf("%f", &celsius);
    printf("%.2f", celsiusToFahrenheit(celsius));
    return 0;
}