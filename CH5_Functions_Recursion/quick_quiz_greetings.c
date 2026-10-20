/*
Write a program with three functions:
1. Good morning function which prints "good morning".
2. Good afternoon function which prints "good afternoon".
3. Good night function which prints "good night".
main() should call all of these in order 1→2→3
*/

#include<stdio.h>

void morning();
void evening();
void night();

void morning()
{
    printf("Good Morning\n");
}
void evening()
{
    printf("Good Evening\n");
}
void night()
{
    printf("Good Night\n");
}

int main()
{
    morning();
    evening();
    night();
    return 0;
}