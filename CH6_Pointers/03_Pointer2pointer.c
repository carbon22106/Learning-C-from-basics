#include<stdio.h>

int main()
{
    int i = 10;
    int* j = &i;
    int** k = &j; 

    printf("Value of i = (i) -> %d\n", i);
    printf("Value of i = (*&i) -> %d\n", *&i);
    printf("Value of i = (*j) -> %d\n", *j);
    printf("Value of i = (**&j) -> %d\n", **&j);
    printf("Value of i = (**k) -> %d\n", **k);
    printf("Value of i = (***&k) -> %d\n", ***&k);

    return 0;
}