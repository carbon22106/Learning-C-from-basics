// 9. Write a program to check whether a given character is present in a string or not.

#include<stdio.h>

int main()
{
    char str[255];
    char letter;
    printf("String : ");
    gets(str);
    printf("Find : ");
    scanf("%c", &letter);
    int i = 0, present = 0;
    while (str[i] != '\0')
    {
        if (str[i] == letter)
        {
            present = 1;
            break;
        }
        i++;
    }
    if (present) printf("'%c' is present in '%s'", letter, str);
    else printf("'%c' is NOT present in '%s'", letter, str);
    return 0;
}