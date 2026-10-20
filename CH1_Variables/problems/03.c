#include<stdio.h>

int main(){
    float c, f;
    printf("C : ");
    scanf("%f", &c);
    printf("%f degree = %f", c, (c*1.8) + 32);
    return 0;
}