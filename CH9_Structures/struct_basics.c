#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2;
    e1.code = 1001; e1.salary = 65000; strcpy(e1.name, "Tomato");
    e2.code = 1006; e2.salary = 75000.95; strcpy(e2.name, "Potato");

    printf("E1 -> %d : %c : %s\n", e1.code, e1.salary, e1.name);
    printf("E2 -> %d : %c : %s\n", e2.code, e2.salary, e2.name);
    return 0;
}