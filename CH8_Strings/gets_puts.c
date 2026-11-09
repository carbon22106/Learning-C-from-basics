#include<stdio.h>

int main()
{
    char str[10];
    printf("Enter String : ");
    gets(str);

    printf("printf : %s\nputs : ", str);
    puts(str);
    return 0;
}