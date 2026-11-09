// Write a function slice()  to slice a string. It should change the original string such that it is now the sliced string. Take m  and n  as the start and ending position for slice.

#include<stdio.h>

//my inital way but pointer methord better
char* loop_slice(char* s, int m, int n)
{
    int i = m;
    int j = 0;
    while (i <= n)
    {
        s[j] = s[i];
        // printf("s[j] = %c, s[i] = %c\n", s[j], s[i]);
        i++; j++;
    }
    s[n] = '\0';

    return s;
}

// pointer way
char* ptr_slice(char* s, int m, int n)
{
    s = &s[m];
    s[n] = '\0';

    return s;
}


int main()
{
    char str1[] = "This_is_a_String";
    char str2[] = "This_is_a_String";
    printf("LOOP :\nBefore : %s\n", str1);
    printf("After (loop) : %s\n\n", loop_slice(str1, 1, 7));

    printf("POINTER :\nBefore : %s\n", str2);
    printf("After (ptr) : %s\n", ptr_slice(str2, 1, 7));
    return 0;
}