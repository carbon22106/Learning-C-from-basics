#include <stdio.h>

int main()
{
    float si, p, r, t;
    printf("Principal Amount : ");
    scanf("%f", &p);
    printf("Rate of Intrest  : ");
    scanf("%f", &r);
    printf("Time             : ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Total Amount     = %f", p + si);
    return 0;
}