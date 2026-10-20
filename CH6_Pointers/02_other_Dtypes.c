#include<stdio.h>

int main()
{
    char i = 'A';
    char* ip = &i;
    printf("(*j) -> %c\n", *ip);

    float k = 6.25;
    float* kp = &k;
    printf("(*k) -> %f", *kp);
    return 0;
}