#include<stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++); // 4 5 5 or 6 6 4, both ans are correct, it dedpends on the compilers evaluation order.
    return 0;
}