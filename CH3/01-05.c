#include<stdio.h>

int main()
{
    int age;
    printf("Enter Age : ");
    scanf("%d", &age);
    if (age >= 80) // optional in condition (&& age < 80), not needed due to else if ladder.
    {
        printf("Sorry, you can NOT Drive.");
    } else if (age >= 18)
    {
        printf("You can Drive.");
    } else {
        printf("You can NOT Drive.");
    }
    return 0;
}