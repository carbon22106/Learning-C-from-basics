// Write your own version of strlen  function from <string.h>

#include<stdio.h>
#include<string.h>

int len(char* s)
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char string[] = "hello";
    printf("len : %d\n", len(string));
    printf("strlen : %d", strlen(string));

    return 0;
}