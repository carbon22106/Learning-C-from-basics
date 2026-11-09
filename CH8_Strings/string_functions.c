#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char s_cp[100];
    char s_cat[200];

    printf("String : ");
    gets(s);

    printf("Length is %d\n", strlen(s));

    strcpy(s_cp, s);
    printf("copy of %s = %s\n", s, s_cp);

    strcpy(s_cat, s);
    strcat(s_cat, " is a string.");
    printf("strcat : %s\n", s_cat);
    return 0;
}