// Write a program to count the occurrence of a given character in a string.

#include<stdio.h>

int main()
{
    char str[255];
    char letter;
    printf("String : ");
    gets(str);
    printf("Count : ");
    scanf("%c", &letter);
    
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == letter)
        {
            count++;
        }
        i++;
    }

    printf("%d '%c' in '%s'", count, letter, str);
    return 0;
}