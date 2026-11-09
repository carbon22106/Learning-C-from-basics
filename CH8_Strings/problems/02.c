// Write a program to take string as an input from the user using %c  and %s  and confirm that the strings are equal. 

#include<stdio.h>
#include<string.h>

int main()
{
    char c[6], s[6];

    for (int i = 0; i < 5; i++)
    {
        printf("C[%d] : ", i);
        scanf(" %c", &c[i]);
    }
    c[5] = '\0';

    printf("\nEnter Same String\nS : ");
    scanf("%s", s);
    printf("C = %s, S = %s\n", c, s);

    if (strcmp(s, c) == 0)
    {
        printf("String are Equal.");
    } else {
        printf("String are  NOT Equal.");
    }

    return 0;
}