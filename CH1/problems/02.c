#include<stdio.h>

int main(){
    int r, rc, h;
    printf("Enter radius of circle : ");
    scanf("%d", &r);
    printf("Area of Circle : %f", 3.14*r*r);
    printf("\nEnter radius of cylinder : ");
    scanf("%d", &rc);
    printf("Enter height of cylinder : ");
    scanf("%d", &h);
    printf("\n Volume of Cylinder : %f", 3.14*r*r*h);
    return 0;
}