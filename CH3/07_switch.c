#include<stdio.h>

int main()
{
    float marks;
    printf("Enter Marks : ");
    scanf("%f", &marks);
    if (marks >= 90){
        printf("A");
    } 
    else if (marks >= 80)
    {
        printf("B");
    } 
    else if (marks >= 70)
    {
        printf("C");
    } 
    else if (marks >= 60)
    {
        printf("D");
    } 
    else if (marks >= 50)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }
    

    return 0;
}