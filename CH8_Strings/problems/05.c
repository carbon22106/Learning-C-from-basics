//Write your own version of strcpy  function from <string.h>.

#include<stdio.h>
#include<string.h>


// my inital way
void loop_cpy(char* new, char* old)
{
    int i = 0;
    while (old[i] != '\0')
    {
        new[i] = old[i];
        i++;
    }
    new[i] = '\0';
}

int main()
{
    char x[] = "Hello This is X", y[100] = "y?";
    printf("Normal -> %s : %s\n", x, y);

    strcpy(y, x);
    printf("scrcpy -> %s : %s\n", x, y);

    char a[] = "Hello This is X", b[100] = "y?";
    loop_cpy(b, a);
    printf("loop_cpy -> %s : %s\n", a, b);

    return 0;
}