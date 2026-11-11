// Write a program to store the details of 3 employees from user defined data. Use the structure declared above.
#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e[3];
    
    for (int i = 0; i < 3; i++)
    {
        printf("e%d.code : ", i+1);
        scanf("%d", &e[i].code);

        printf("e%d.salary : ", i+1);
        scanf("%f", &e[i].salary);

        printf("e%d.name : ", i+1);
        getchar();
        gets(e[i].name);
    }

    printf("E1 -> %d : %f : %s\n", e[0].code, e[0].salary, e[0].name);
    printf("E2 -> %d : %f : %s\n", e[1].code, e[1].salary, e[1].name);
    printf("E3 -> %d : %f : %s\n", e[2].code, e[2].salary, e[2].name);

    // much better than hardcoding scanfs.

    return 0;
}