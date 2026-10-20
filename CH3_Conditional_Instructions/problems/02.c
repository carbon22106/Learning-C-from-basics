// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there are
// three subjects and take the marks as input from

#include<stdio.h>

int main()
{
    float a, b, c;
    printf("Subject 1 marks : ");
    scanf("%f", &a);
    printf("Subject 2 marks : ");
    scanf("%f", &b);
    printf("Subject 3 marks : ");
    scanf("%f", &c);

    float percent = (a+b+c)/3; // (a+b+c)/300*100

    printf("%f\n", percent);
    printf("A : %f = %f\nB : %f = %f\nC : %f = %f\nTotal Percentage : %f\n", a, a, b, b, c, c, percent);
    if (percent >= 40 && a >= 33 && b >= 33 && c >= 33){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
    

    return 0;
}