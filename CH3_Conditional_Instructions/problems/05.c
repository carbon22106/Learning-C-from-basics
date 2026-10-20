#include<stdio.h>

int main()
{
    char character;
    printf("Enter Character : ");
    scanf("%c", &character);

    if (character >= 97 && character <= 122)
    {
        printf("The Character \"%c\" is Lower Case.", character);
    }
    else
    {
        printf("The Character \"%c\" is NOT Lower Case.", character);
    }
    
    

    return 0;
}