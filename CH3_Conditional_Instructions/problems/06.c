#include<stdio.h>

int main()
{
    float a, b, c, d;
    printf("A : ");
    scanf("%f", &a);
    printf("B : ");
    scanf("%f", &b);
    printf("C : ");
    scanf("%f", &c);
    printf("D : ");
    scanf("%f", &d);

    if (a>b&&a>c&&a>d)
    {
        printf("%.2f is Greatest", a);
    }
    else if (b>a&&b>c&&b>d)
    {
        printf("%.2f is Greatest", b);
    }
    else if (c>a&&c>b&&c>d)
    {
        printf("%.2f is Greatest", c);
    }
    else if (d>a&&d>b&&d>c)
    {
        printf("%.2f is Greatest", d);
    }
    


    return 0;
}