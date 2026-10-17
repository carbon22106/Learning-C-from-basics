#include<stdio.h>

int main(){
    int a, b;

    printf("A : ");
    scanf("%d", &a);
    printf("B : ");
    scanf("%d", &b);

    printf("a + b : %d\n", a+b);
    printf("a - b : %d\n", a-b);
    printf("a * b : %d\n", a*b);
    printf("a / b : %d\n", a/b);
    printf("a modulus b : %d\n", a%b);
    return 0;
}